using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Niantic.ARDK;
using Niantic.ARDK.AR;
using Niantic.ARDK.AR.Awareness;
using Niantic.ARDK.AR.Awareness.Semantics;
using Niantic.ARDK.Extensions;
using Niantic.ARDK.AR.ARSessionEventArgs;
using Niantic.ARDK.AR.Configuration;

public class SemanticTextures : MonoBehaviour
{
    public ARSemanticSegmentationManager _semanticManager;
    Texture2D _semanticTexture;

    public Material _sharedMaterial;

    void Start()
    {
        _semanticManager.SemanticBufferUpdated += OnSemanticsBufferUpdated;
    }

    private void OnSemanticsBufferUpdated(ContextAwarenessStreamUpdatedArgs<ISemanticBuffer> args)
    {
        ISemanticBuffer semanticBuffer = args.Sender.AwarenessBuffer;

        int channel = semanticBuffer.GetChannelIndex("ground");

        semanticBuffer.CreateOrUpdateTextureARGB32(
            ref _semanticTexture, channel
            );
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnRenderImage(RenderTexture source, RenderTexture destination)
    {
        _sharedMaterial.SetTexture("_SemanticTex", _semanticTexture) ;

        _sharedMaterial.SetMatrix("_semanticTransform", _semanticManager.SemanticBufferProcessor.SamplerTransform);

        Graphics.Blit(source, destination, _sharedMaterial);
    }
}
