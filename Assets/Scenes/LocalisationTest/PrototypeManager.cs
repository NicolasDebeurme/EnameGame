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

public class PrototypeManager : MonoBehaviour
{
    // Prefab to spawn on top of detected images.
    [SerializeField]
    private GameObject _sphere = null;


    [Header("Image detection managers")]
    [SerializeField]
    private ARImageDetectionManager _imageDetectionManager;

    [Header("AR Depth Manager")]
    [SerializeField]
    private ARDepthManager _depthManager;
    [SerializeField]
    private ARDepthInterpolationAdapter _depthInterpolationManager;

    [Header("Images to manually add")]
    [SerializeField]
    private TextAsset _imagePath;


    private Dictionary<Guid, GameObject> _detectedImages = new Dictionary<Guid, GameObject>();
    private void Start()
    {
        ARSessionFactory.SessionInitialized += SetupSession;

        _imageDetectionManager.EnableFeatures();
        _depthManager.EnableFeatures();

        SetupCodeImageDetectionManager();
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

    private void SetupCodeImageDetectionManager()
    {
        // For the sake of this example, we're loading the specified asset into a temporary file.
        // In a real application, this could be a file downloaded from the internet and written to
        // the device, or a user selected file.
        var tempFilePath = Path.Combine(Application.temporaryCachePath, "filePathImage.jpg");


        File.WriteAllBytes(tempFilePath, _imagePath.bytes);

        // Create an ARReferenceImage from the local file path.
        var imageFromPath =
          ARReferenceImageFactory.Create
          (
            "filePathImage",
            tempFilePath,
            0.25f
          );

        _imageDetectionManager.AddImage(imageFromPath);
    }

    private void OnAnchorsAdded(AnchorsArgs args)
    {
        foreach (var anchor in args.Anchors)
        {
            if (anchor.AnchorType != AnchorType.Image)
                continue;

            var imageAnchor = (IARImageAnchor)anchor;
            var imageName = imageAnchor.ReferenceImage.Name;

            var newPlane = Instantiate(_sphere);
            newPlane.name = "Image-" + imageName;
            _detectedImages[anchor.Identifier] = newPlane;

            _depthInterpolationManager._occludee = _detectedImages[anchor.Identifier].GetComponent<Renderer>();

            UpdatePlaneTransform(imageAnchor);
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
        var identifier = imageAnchor.Identifier;

        _detectedImages[identifier].transform.position = imageAnchor.Transform.ToPosition() + new Vector3(0,0.5f,0);
        _detectedImages[identifier].transform.rotation = imageAnchor.Transform.ToRotation();

        var localScale = _detectedImages[identifier].transform.localScale;
        localScale.x = 1;
        localScale.z = 1;
        _detectedImages[identifier].transform.localScale = localScale;

        
    }

}
