// Copyright 2021 Niantic, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Text;

using Niantic.ARDK.Extensions;
using Niantic.ARDK.Networking;
using Niantic.ARDK.Networking.MultipeerNetworkingEventArgs;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.BinarySerialization;
using Niantic.ARDK.Utilities.BinarySerialization.ItemSerializers;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using Random = UnityEngine.Random;
using System.Collections;

namespace Niantic.ARDKExamples
{
    /// Example of using persistent key-store to update the color of a "blobs." See the
    /// "Additional MultipeerNetworking Features" page in the User Manual for more details on
    /// the ARDK APIs used here.
    ///
    /// To run:
    ///   1. Join the same session on multiple mobile devices and/or Unity Editor instances.
    ///   2. Everyone can tap their screen to change the color of the 'Tap Tap' blob.
    ///   3. The 'Server Blob' (top) on all phones will sync to the same color when tapping stops.
    ///      Every phone will not see every color, but once tapping stops, the phones are guaranteed
    ///      to all converge to the last written color.
    public class PersistentKeyValueChoice : MonoBehaviour
    {
        private static PersistentKeyValueChoice instance;

        public TextMeshProUGUI textDialogueText;
        public Button Button1;
        public Button Button2;
        public TMP_Dropdown RolesSelection;
        public Role YourRole;

        public ChoiceClass1 choice;
        public ChoiceClass1 MemoryChoice;



        // Main interaction point for the low-level networking API.
        private IMultipeerNetworking _networking;

        private readonly MemoryStream _stream = new MemoryStream(100);

        private void Awake()
        {
            MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
            MemoryChoice = choice;

            instance = this;

        }

        IEnumerator WaitForReset(float sec)
        {
            yield return new WaitForSeconds(sec);
            OnClickedReset();
        }

        private void OnNetworkingInitialized(AnyMultipeerNetworkingInitializedArgs args)
        {
            _networking = args.Networking;

            _networking.Connected += OnConnect;
            _networking.Disconnected += OnDisconnect;
            _networking.ConnectionFailed += OnConnectionFailed;
            _networking.PersistentKeyValueUpdated += OnKeyValueUpdated;
        }

        private void OnDestroy()
        {
            if (_networking != null)
            {
                _networking.Leave();
                _networking.Dispose();
                _networking = null;
            }
        }

        // Tapping the screen after starting the session will change the local blob color and send
        // a message to the server to store that color as the latest
        public void OnClickedButton1()
        {
            if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
                return;

            if (!choice.visibilitys.Decide.Contains(YourRole))
                return;

            _stream.Position = 0;
            _stream.SetLength(0);
            using (var binarySerializer = new BinarySerializer(_stream))
                Int16Serializer.Instance.Serialize(binarySerializer, 1);
            var value = _stream.ToArray();
            Debug.LogFormat("Send : " + 1);
            _networking.StorePersistentKeyValue("State", value);
        }
        public void OnClickedButton2()
        {
            if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
                return;

            if (!choice.visibilitys.Decide.Contains(YourRole))
                return;

            _stream.Position = 0;
            _stream.SetLength(0);
            using (var binarySerializer = new BinarySerializer(_stream))
                Int16Serializer.Instance.Serialize(binarySerializer, 2);
            var value = _stream.ToArray();
            Debug.LogFormat("Send : " + 2);
            _networking.StorePersistentKeyValue("State", value);
        }
        public void OnClickedReset()
        {
            Debug.Log("StartReset");

            if (_networking == null || !_networking.IsConnected) //   || PlatformAgnosticInput.touchCount <= 0
                return;

            Debug.Log("Reset");

            _stream.Position = 0;
            _stream.SetLength(0);
            using (var binarySerializer = new BinarySerializer(_stream))
                Int16Serializer.Instance.Serialize(binarySerializer, 3);
            var value = _stream.ToArray();
            Debug.LogFormat("Send : " + "Reset");
            _networking.StorePersistentKeyValue("State", value);


            

        }

        private void OnConnect(ConnectedArgs args)
        {
            YourRole = (Role)RolesSelection.value;
            RolesSelection.gameObject.SetActive(false);
            StartCoroutine(WaitForReset(2));
        }

        private void OnDisconnect(DisconnectedArgs args)
        {
            // Disconnect callback may be received while scene GameObjects are being destroyed,
            // so check that the blobs' are still valid
            
        }

        private void OnConnectionFailed(ConnectionFailedArgs args)
        {
            Debug.LogFormat("Connection failed (err code = {0})", args.ErrorCode);
        }

        private void OnKeyValueUpdated(PersistentKeyValueUpdatedArgs args)
        {
            /*
            if (_serverBlob == null)
            {
                // Null check required because callback may be received while GameObjects are being
                // destroyed if the scene is unloaded.
                return;
            }
            /*
            if (args.Key != "Color")
                throw new Exception("Received an update for a key other than Color");
            if (args.Key != "ColorName")
                throw new Exception("Received an update for a key other than ColorNAME");
            */
            //_serverBlob.gameObject.SetActive(true);
            if (args.Key == "State")
            {
                using (var stream = args.CreateValueReader())
                {
                    using (var binaryDeserializer = new BinaryDeserializer(stream))
                    {
                        var number = Int16Serializer.Instance.Deserialize(binaryDeserializer);

                        if (number==1)
                        {
                            choice = choice.Choice1.choice;
                            choice.isActiveChoice = true;
                            if (choice.visibilitys.Decide.Contains(YourRole) || choice.visibilitys.See.Contains(YourRole))
                            {
                                textDialogueText.text = choice.DialogueText;
                                Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
                                Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
                            }
                            else
                            {
                                textDialogueText.text = "Wait";
                                Button1.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
                                Button2.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
                            }
                            
                            Debug.LogFormat("Receive : " + 1);

                        }
                        if (number == 2)
                        {
                            choice = choice.Choice2.choice;
                            choice.isActiveChoice = true;
                            if (choice.visibilitys.Decide.Contains(YourRole) || choice.visibilitys.See.Contains(YourRole))
                            {
                                textDialogueText.text = choice.DialogueText;
                                Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
                                Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
                            }
                            else
                            {
                                textDialogueText.text = "Wait";
                                Button1.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
                                Button2.GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
                            }
                            Debug.LogFormat("Receive : " + 2);

                        }

                        if (number == 3)
                        {

                            choice = MemoryChoice;
                            textDialogueText.text = choice.DialogueText;
                            Button1.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button1Text;
                            Button2.GetComponentInChildren<TextMeshProUGUI>().text = choice.Button2Text;
                            Debug.LogFormat("Receive : " + "Reset");
                        }

                    }
                }
            }
            
            
        }
    }
}
