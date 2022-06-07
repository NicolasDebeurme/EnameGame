/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using OpenCvSharp;
using System;

public class FaceDetection : MonoBehaviour
{
    WebCamTexture _webCamTexture;
    [SerializeField]
    public CascadeClassifier cascade;
    OpenCvSharp.Rect MyFace;

    void Start()
    {
        WebCamDevice[] devices = WebCamTexture.devices;

        _webCamTexture = new WebCamTexture(devices[0].name);
        _webCamTexture.Play();
        string tempPath = System.IO.Path.Combine(Application.persistentDataPath, "haarcascade_frontalface_default.xml");
        Debug.Log("tempPath:" + tempPath);
        //cascade = new CascadeClassifier(System.IO.Directory.GetCurrentDirectory() + @"\Assets\haarcascade_frontalface_default.xml");
        cascade = new CascadeClassifier(tempPath);

    }

    void Update()
    {
        GetComponent<Renderer>().material.mainTexture = _webCamTexture;
        Mat frame = OpenCvSharp.Unity.TextureToMat(_webCamTexture);

        FindNewFace(frame);
        Display(frame);
    }

    void FindNewFace(Mat frame)
    {
        var faces = cascade.DetectMultiScale(frame, 1.1, 2, HaarDetectionType.ScaleImage);

        if (faces.Length >=1)
        {
            //Debug.Log(faces[0].Location);
            MyFace = faces[0];
        }
    }

    void Display(Mat frame)
    {
        if (MyFace != null)
        {
            frame.Rectangle(MyFace, new Scalar(250, 0, 0), 2);
        }

        Texture newtexture = OpenCvSharp.Unity.MatToTexture(frame);
        GetComponent<Renderer>().material.mainTexture = newtexture;
    }

}*/