// Copyright 2021 Niantic, Inc. All Rights Reserved.

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

using Niantic.ARDK.AR;
using Niantic.ARDK.AR.Configuration;
using Niantic.ARDK.AR.Anchors;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.ReferenceImage;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.Utilities;
using Niantic.ARDK.Utilities.Collections;

using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace Niantic.ARDKExamples
{
    // Image Detection example. Shows how to create and use an ARImageDetectionManager, both through
    // the inspector and through code. For the manager created through code, shows how to create
    // ARReferenceImages both from a byte stream and from a file.
    // Also includes adding and removing an image from a manager at runtime.
    //
    // The expected behavior is that color-coded rectangles will appear over the image if it shows up
    // in the real environment (such as pulled up on a computer monitor). The rectangle will follow if
    // the image moves, but it jumps a few times a second rather than smoothly.
    // For the inspector created manager, a blue rectangle will appear over the image of the crowd.
    // For the code created manager, red and green rectangles will appear over the images of the
    // Niantic yeti and logo.
    // If the detected images are changed (by switching between managers, or by enabling/disabling the
    // yeti) the detected anchors will be cleared.
    //
    // See the "Detecting Images" page in the User Manual for further information on how to optimally
    // detect images and use image anchors.
    public class ImageDetection :
      MonoBehaviour
    {
        // Prefab to spawn on top of detected images.
        [SerializeField]
        private GameObject _plane = null;

        [Header("Image detection managers")]
        [SerializeField]
        private ARImageDetectionManager _inspectorImageDetectionManager;




        private IARReferenceImage _yetiImage;

        private Dictionary<Guid, GameObject> _detectedImages = new Dictionary<Guid, GameObject>();

        private bool _yetiImageInImageSet = true;

        private void Start()
        {
            ARSessionFactory.SessionInitialized += SetupSession;



            UpdateButtonText();
        }

        private static string BoolText(bool currentCondition)
        {
            return currentCondition ? "Disable" : "Enable";
        }

        private void UpdateButtonText()
        {
 
        }

        private void SetupSession(AnyARSessionInitializedArgs arg)
        {
            // Add listeners to all relevant ARSession events.
            var session = arg.Session;
            session.SessionFailed += args => Debug.Log(args.Error);
            session.AnchorsAdded += OnAnchorsAdded;
            session.AnchorsUpdated += OnAnchorsUpdated;
            session.AnchorsRemoved += OnAnchorsRemoved;
        }
 
        private void ToggleInspectorImageManager()
        {
            // Disable the manager, or enable it and disable the other one.
            if (_inspectorImageDetectionManager.AreFeaturesEnabled)
            {
                _inspectorImageDetectionManager.DisableFeatures();
            }
            else
            {
                
                _inspectorImageDetectionManager.EnableFeatures();
            }

            UpdateButtonText();
        }


        private void OnAnchorsAdded(AnchorsArgs args)
        {
            foreach (var anchor in args.Anchors)
            {
                if (anchor.AnchorType != AnchorType.Image)
                    continue;

                var imageAnchor = (IARImageAnchor)anchor;
                var imageName = imageAnchor.ReferenceImage.Name;

                var newPlane = Instantiate(_plane);
                newPlane.name = "Image-" + imageName;
                SetPlaneColor(newPlane, imageName);
                _detectedImages[anchor.Identifier] = newPlane;

                UpdatePlaneTransform(imageAnchor);
            }
        }

        static Dictionary<string, Color> _imageColors = new Dictionary<string, Color>
    {
      { "byteBufferImage", Color.red },
      { "filePathImage", Color.green },
      { "crowd", Color.blue },
    };

        private void SetPlaneColor(GameObject plane, string imageName)
        {
            var renderer = plane.GetComponentInChildren<MeshRenderer>();
            Color planeColor = Color.black;
            _imageColors.TryGetValue(imageName, out planeColor);
            renderer.material.color = planeColor;
        }

        private void OnAnchorsUpdated(AnchorsArgs args)
        {
            foreach (var anchor in args.Anchors)
            {
                if (!_detectedImages.ContainsKey(anchor.Identifier))
                    continue;

                var imageAnchor = anchor as IARImageAnchor;
                UpdatePlaneTransform(imageAnchor);
            }
        }

        private void OnAnchorsRemoved(AnchorsArgs args)
        {
            foreach (var anchor in args.Anchors)
            {
                if (!_detectedImages.ContainsKey(anchor.Identifier))
                    continue;

                Destroy(_detectedImages[anchor.Identifier]);
                _detectedImages.Remove(anchor.Identifier);
            }
        }

        private void UpdatePlaneTransform(IARImageAnchor imageAnchor)
        {
            var identifier = imageAnchor.Identifier;

            _detectedImages[identifier].transform.position = imageAnchor.Transform.ToPosition();
            _detectedImages[identifier].transform.rotation = imageAnchor.Transform.ToRotation();

            var localScale = _detectedImages[identifier].transform.localScale;
            localScale.x = imageAnchor.ReferenceImage.PhysicalSize.x;
            localScale.z = imageAnchor.ReferenceImage.PhysicalSize.y;
            _detectedImages[identifier].transform.localScale = localScale;
        }
    }
}
