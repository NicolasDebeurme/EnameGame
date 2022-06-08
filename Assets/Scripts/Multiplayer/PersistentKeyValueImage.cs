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
    public class PersistentKeyValueImage : MonoBehaviour
    {
        public static PersistentKeyValueImage instance;

        public byte[] fileBytesPicture;
        public bool doOnce=true;

        [Space]
        public Image ImageMonk;
        //public byte[] fileBytesMonk;

        [Space]
        public Image ImageAlchemist;
        //public byte[] fileBytesAlchemist;

        [Space]
        public Image ImageAdult;
        //public byte[] fileBytesAdult;

        [Space]
        public Image ImageChild;
        //public byte[] fileBytesChild;


        // Main interaction point for the low-level networking API.
        private IMultipeerNetworking _networking;

        private readonly MemoryStream _stream = new MemoryStream(100);

        private void Awake()
        {
            MultipeerNetworkingFactory.NetworkingInitialized += OnNetworkingInitialized;
            instance = this;

        }

        public void Update()
        {

        }
        

        private void OnNetworkingInitialized(AnyMultipeerNetworkingInitializedArgs args)
        {
            _networking = args.Networking;

            _networking.Connected += OnConnect;
            _networking.Disconnected += OnDisconnect;
            _networking.ConnectionFailed += OnConnectionFailed;
            //_networking.PeerDataReceived += OnPeerDataReceived;
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
       

        public void OnSendImage()
        {
            if (_networking == null || !_networking.IsConnected || !doOnce)
                return;
            doOnce = false;
            _stream.Position = 0;
            _stream.SetLength(0);
            using (var binarySerializer = new BinarySerializer(_stream))
                ByteArraySerializer.Instance.Serialize(binarySerializer, fileBytesPicture );
            var value = _stream.ToArray();
            Debug.LogFormat("Send : Picture");
            _networking.StorePersistentKeyValue("Picture" + PersistentKeyValueTree.instance.YourRole.ToString(), value);//+ PersistentKeyValueTree.instance.YourRole.ToString()
            //_networking.BroadcastData(0, value, TransportType.UnreliableOrdered, true);
        }

        

        

      

        private void OnConnect(ConnectedArgs args)
        {


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
            
            
            Debug.Log("Receive Picture ARG Key");
            using (var stream = args.CreateValueReader())
            {
                using (var binaryDeserializer = new BinaryDeserializer(stream))
                {
                    var pictureArray = ByteArraySerializer.Instance.Deserialize(binaryDeserializer);
                    Debug.Log(pictureArray);
                    Debug.LogFormat("Receive : " + "Picture");

                    Texture2D texture = null;
                    texture = new Texture2D(2, 2, TextureFormat.RGB24, false);
                    texture.LoadImage(pictureArray);

                    Sprite sp = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height),new Vector2(0.5f, 0.5f));

                    Debug.Log("Normalement ca passe");
                    if (args.Key == "Picture" + Role.Monk.ToString())
                    {
                        ImageMonk.sprite = sp;
                    }
                    if (args.Key == "Picture" + Role.Alchemist.ToString())
                    {
                        ImageAlchemist.sprite = sp;
                    }
                    if (args.Key == "Picture" + Role.Adult.ToString())
                    {
                        ImageAdult.sprite = sp;
                    }
                    if(args.Key == "Picture" + Role.Child.ToString())
                    {
                        ImageChild.sprite = sp;
                    }
                }
            }

            
        }
    }
}
