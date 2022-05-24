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
    [Header("Image detection managers")]
    [SerializeField]
    private ARImageDetectionManager _imageDetectionManager;

    [Header("AR Depth Manager")]
    [SerializeField]
    private ARDepthManager _depthManager;
    [SerializeField]
    private ARDepthInterpolationAdapter _depthInterpolationManager;

    [Header("Prefabs")]
    [SerializeField]
    private GameObject[] _prefabs;


    static Dictionary<string, GameObject> _imagePrefabs = new Dictionary<string, GameObject>();

    private Dictionary<Guid, GameObject> _detectedImages = new Dictionary<Guid, GameObject>();
    private void Start()
    {
        ARSessionFactory.SessionInitialized += SetupSession;

        _imageDetectionManager.EnableFeatures();
        _depthManager.EnableFeatures();

        InitPrefabDictionnary();
    }


    void InitPrefabDictionnary()
    {
        foreach(var prefabs in _prefabs)
        {
            _imagePrefabs.Add(prefabs.name, prefabs);
        }
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

            GameObject prefabToSpawn = null;

            _imagePrefabs.TryGetValue(imageName, out prefabToSpawn);

            if (prefabToSpawn == null)
                return;

            var spawnedPrefab = Instantiate(prefabToSpawn);
            spawnedPrefab.name = "Image-" + imageName;
            _depthInterpolationManager._occludee = spawnedPrefab.GetComponent<Renderer>();

            _detectedImages[anchor.Identifier] = spawnedPrefab;

            UpdatePrefabTransform(imageAnchor);
        }
    }

    private void OnAnchorsUpdated(AnchorsArgs args)
    {
        foreach (var anchor in args.Anchors)
        {
            if (!_detectedImages.ContainsKey(anchor.Identifier))
                continue;

            var imageAnchor = anchor as IARImageAnchor;
            UpdatePrefabTransform(imageAnchor);
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

    private void UpdatePrefabTransform(IARImageAnchor imageAnchor)
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
