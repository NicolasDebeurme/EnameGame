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
using Unity.VisualScripting;
using Niantic.ARDK.Utilities.Input.Legacy;

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
    public class PersistentKeyValueTree : MonoBehaviour
    {
        public static PersistentKeyValueTree instance;
        public Button JoinButton;
        public TextMeshProUGUI textDialogueText;
        public Button[] ButtonsChoice;
        public Button Reset;
        public TMP_Dropdown RolesSelection;
        public Role YourRole;

        public Node Node;
        private Node MemoryNode;



        // Main interaction point for the low-level networking API.
        private IMultipeerNetworking _networking;

        private readonly MemoryStream _stream = new MemoryStream(100);

        private void Awake()
        {
            MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
            MemoryNode = Node;
            instance = this;
            JoinButton.gameObject.SetActive(false);
            foreach (Button Buttonchoice in ButtonsChoice)
            {
                Buttonchoice.gameObject.SetActive(false);
            }
            Reset.gameObject.SetActive(false);
        }

        public void Update()
        {
            if ((Role)RolesSelection.value != Role.None)
            {
                JoinButton.gameObject.SetActive(true);
            }
            else
            {
                JoinButton.gameObject.SetActive(false);
            }
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
        public void OnClickedButton1(int buttonNumber)
        {
            if (_networking == null || !_networking.IsConnected || PlatformAgnosticInput.touchCount <= 0)
                return;

            if (!Node.visibilitys.Decide.Contains(YourRole))
                return;

            _stream.Position = 0;
            _stream.SetLength(0);
            using (var binarySerializer = new BinarySerializer(_stream))
                Int16Serializer.Instance.Serialize(binarySerializer, (short)buttonNumber);
            var value = _stream.ToArray();
            Debug.LogFormat("Send : " + 1);
            _networking.StorePersistentKeyValue("Choice", value);

            
        }
        
        IEnumerator WaitBeforeChangeState()
        {
            yield return new WaitForSeconds(5);
            GameManager.instance.actualState = ActualState.SELECT_PLACE;
            GameManager.instance.ChangeState();
        }

        public void OnClickedReset()
        {

            if (_networking == null || !_networking.IsConnected) //   || PlatformAgnosticInput.touchCount <= 0
                return;


            _stream.Position = 0;
            _stream.SetLength(0);
            using (var binarySerializer = new BinarySerializer(_stream))
                Int16Serializer.Instance.Serialize(binarySerializer, 0);
            var value = _stream.ToArray();
            Debug.LogFormat("Send : " + "Reset");
            _networking.StorePersistentKeyValue("Reset", value);




        }

        private void OnConnect(ConnectedArgs args)
        {
            YourRole = (Role)RolesSelection.value;
            RolesSelection.gameObject.SetActive(false);
            GameManager.instance.actualState = ActualState.PICTURE;
            GameManager.instance.ChangeState();
            foreach (Button Buttonchoice in ButtonsChoice)
            {
                Buttonchoice.gameObject.SetActive(true);
            }
            Reset.gameObject.SetActive(true);
            textDialogueText.text = Node.DialogueText;
            for (int i = 0; i < ButtonsChoice.Length && i< Node.NodesArray.Length; i++)
            {
                ButtonsChoice[i].GetComponentInChildren<TextMeshProUGUI>().text = Node.NodesArray[i].ButtonText;
            }
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
            if (args.Key == "Choice")
            {
                StartCoroutine(WaitBeforeChangeState());

                using (var stream = args.CreateValueReader())
                {
                    using (var binaryDeserializer = new BinaryDeserializer(stream))
                    {
                        var number = Int16Serializer.Instance.Deserialize(binaryDeserializer);

                        Debug.Log(number);
                        if (Node.NodesArray[number-1] != null )
                        {
                            Node = Node.NodesArray[number - 1].Choice;
                            Node.IsActiveChoiceUpdate();
                        }
                        else
                        {
                            Debug.LogFormat("Node null");
                        }
                        if (Node.visibilitys.Decide.Contains(YourRole) || Node.visibilitys.See.Contains(YourRole))
                        {
                            textDialogueText.text = Node.DialogueText;
                            for (int i = 0; i < ButtonsChoice.Length && i < Node.NodesArray.Length; i++)
                            {
                                ButtonsChoice[i].GetComponentInChildren<TextMeshProUGUI>().text = Node.NodesArray[i].ButtonText;
                            }
                        }
                        else
                        {
                            textDialogueText.text = "Wait";
                            for (int i = 0; i < ButtonsChoice.Length && i < Node.NodesArray.Length; i++)
                            {
                                ButtonsChoice[i].GetComponentInChildren<TextMeshProUGUI>().text = "Wait";
                            }
                        }
                        Debug.LogFormat("Receive : " + number);







                        

                    }
                }
            }

            if (args.Key == "Reset")
            {
                using (var stream = args.CreateValueReader())
                {
                    using (var binaryDeserializer = new BinaryDeserializer(stream))
                    {
                        var number = Int16Serializer.Instance.Deserialize(binaryDeserializer);
                        if (number == 0)
                        {

                            //choice = MemoryChoice;
                            Node = MemoryNode;
                            textDialogueText.text = Node.DialogueText;
                            for (int i = 0; i < ButtonsChoice.Length && i < Node.NodesArray.Length; i++)
                            {
                                ButtonsChoice[i].gameObject.SetActive(true);
                                ButtonsChoice[i].GetComponentInChildren<TextMeshProUGUI>().text = Node.NodesArray[i].ButtonText;
                            }
                            Debug.LogFormat("Receive : " + "Reset");
                        }





                    }

                }
            }


        }
    }
}
