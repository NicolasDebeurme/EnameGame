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

        [SerializeField]
        private GameObject _plane2 = null;

        [SerializeField]
        private VirtualObject _plane3 = null;

        [SerializeField]
        private ARImageDetectionManager _inspectorImageDetectionManager;

        private Dictionary<Guid, GameObject> _detectedImages = new Dictionary<Guid, GameObject>();

        private Transform offset = null; //my code
        private void Start()
        {
            ARSessionFactory.SessionInitialized += SetupSession;
            StartCoroutine(InitialisationSliderAjustement());// Start initialisation Slider Ajustement 
        }

        IEnumerator InitialisationSliderAjustement()
        {
            yield return new WaitForSeconds(0.1f);
            VirtualObjectAjustement.instance.SlidersPosition[0].value = VirtualObjectAjustement.instance.ChangeSliderValueFromInfiniTo01(_plane3.Position[0], VirtualObjectAjustement.instance.intervalePosition);
            VirtualObjectAjustement.instance.SlidersPosition[1].value = VirtualObjectAjustement.instance.ChangeSliderValueFromInfiniTo01(_plane3.Position[1], VirtualObjectAjustement.instance.intervalePosition);
            VirtualObjectAjustement.instance.SlidersPosition[2].value = VirtualObjectAjustement.instance.ChangeSliderValueFromInfiniTo01(_plane3.Position[2], VirtualObjectAjustement.instance.intervalePosition);

            VirtualObjectAjustement.instance.SlidersScale.value = VirtualObjectAjustement.instance.ChangeSliderValueFromInfiniTo01(_plane3.Scale, VirtualObjectAjustement.instance.intervaleScale) ;

            VirtualObjectAjustement.instance.SlidersRotation[0].value = VirtualObjectAjustement.instance.ChangeSliderValueFromInfiniTo01(_plane3.Rotation[0], VirtualObjectAjustement.instance.intervaleRotation);
            VirtualObjectAjustement.instance.SlidersRotation[1].value = VirtualObjectAjustement.instance.ChangeSliderValueFromInfiniTo01(_plane3.Rotation[1], VirtualObjectAjustement.instance.intervaleRotation);
            VirtualObjectAjustement.instance.SlidersRotation[2].value = VirtualObjectAjustement.instance.ChangeSliderValueFromInfiniTo01(_plane3.Rotation[2], VirtualObjectAjustement.instance.intervaleRotation);
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
      
        private void OnAnchorsAdded(AnchorsArgs args)
        {
            foreach (var anchor in args.Anchors)
            {
                if (anchor.AnchorType != AnchorType.Image)
                    continue;

                var imageAnchor = (IARImageAnchor)anchor;
                var imageName = imageAnchor.ReferenceImage.Name;

                GameObject newPlane = null;
                if (imageName == "crowd")
                {
                    newPlane = Instantiate(_plane3.Object);
                    newPlane.name = "Image-" + imageName;
                    _detectedImages[anchor.Identifier] = newPlane;
                    UpdatePlaneTransform(imageAnchor);
                }
                else
                {
                    newPlane = Instantiate(_plane);
                    newPlane.name = "Image-" + imageName;
                    _detectedImages[anchor.Identifier] = newPlane;
                    UpdatePlaneTransform(imageAnchor);
                }
            }
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
            //Debug.LogFormat("UpdatePosition");
            var identifier = imageAnchor.Identifier;

            //Debug.LogFormat(VirtualObjectAjustement.instance.Positions[0].ToString() +" "+ VirtualObjectAjustement.instance.Positions[1].ToString() + " " + VirtualObjectAjustement.instance.Positions[2].ToString());
            //offset.position = new Vector3(VirtualObjectAjustement.instance.Positions[0], VirtualObjectAjustement.instance.Positions[1], VirtualObjectAjustement.instance.Positions[2]);
            //offset.rotation = Quaternion.Euler(VirtualObjectAjustement.instance.Rotations[0], VirtualObjectAjustement.instance.Rotations[1], VirtualObjectAjustement.instance.Rotations[2]);
            /*
            if (_detectedImages[identifier].name =="crowd")
            {
                offset = _plane2.transform;
            }*/
            if (imageAnchor.ReferenceImage.Name == "crowd")
            {
                _detectedImages[identifier].transform.position = imageAnchor.Transform.ToPosition() + new Vector3(VirtualObjectAjustement.instance.Positions[0], VirtualObjectAjustement.instance.Positions[1], VirtualObjectAjustement.instance.Positions[2])   ;
                _detectedImages[identifier].transform.rotation = imageAnchor.Transform.ToRotation() * Quaternion.Euler(VirtualObjectAjustement.instance.Rotations[0], VirtualObjectAjustement.instance.Rotations[1], VirtualObjectAjustement.instance.Rotations[2])  ;
                var localScale = _detectedImages[identifier].transform.localScale;
                localScale.x = imageAnchor.ReferenceImage.PhysicalSize.x;
                localScale.z = imageAnchor.ReferenceImage.PhysicalSize.y;
                //_detectedImages[identifier].transform.localScale = localScale;
                _detectedImages[identifier].transform.localScale = new Vector3(VirtualObjectAjustement.instance.Scale, VirtualObjectAjustement.instance.Scale, VirtualObjectAjustement.instance.Scale) ;  //my code
            }
            else
            {
                //Debug.LogFormat("not crowd in Update");
            }
            /*
            _detectedImages[identifier].transform.position = imageAnchor.Transform.ToPosition() + new Vector3(VirtualObjectAjustement.instance.Positions[0], VirtualObjectAjustement.instance.Positions[1], VirtualObjectAjustement.instance.Positions[2]);
            _detectedImages[identifier].transform.rotation = imageAnchor.Transform.ToRotation() * Quaternion.Euler(VirtualObjectAjustement.instance.Rotations[0], VirtualObjectAjustement.instance.Rotations[1], VirtualObjectAjustement.instance.Rotations[2]); ;
            var localScale = _detectedImages[identifier].transform.localScale;
            localScale.x = imageAnchor.ReferenceImage.PhysicalSize.x;
            localScale.z = imageAnchor.ReferenceImage.PhysicalSize.y;
            //_detectedImages[identifier].transform.localScale = localScale;
            _detectedImages[identifier].transform.localScale = new Vector3(VirtualObjectAjustement.instance.Scale, VirtualObjectAjustement.instance.Scale, VirtualObjectAjustement.instance.Scale);  //my code
             */
        }
    }
}
