using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.IO;
using TMPro;
using Niantic.ARDKExamples;

public class FrontCam : MonoBehaviour
{
    public static FrontCam instance;

    private bool camAvailable;
    private WebCamTexture frontCam;
    private Texture defaultBackground;

    public RawImage imageFrontCam;
    public AspectRatioFitter fit;


    string[] files = null;
    public GameObject pictures;
    public Button buttonTakePicture;
    public Button buttonDeletePicture;

    [Space]

    public Image[] FilterImages;

    private void Start()
    {
        instance = this;
        SetupFrontCam();
        imageFrontCam.gameObject.SetActive(true);
        buttonTakePicture.gameObject.SetActive(true);
        buttonDeletePicture.gameObject.SetActive(false);
        pictures.gameObject.SetActive(false);

        foreach (Image image in FilterImages)
        {
            image.gameObject.SetActive(false);
        }
        FilterImages[(int)PersistentKeyValueTree.instance.YourRole -1 ].gameObject.SetActive(true);

    }

    // Update is called once per frame
    private void Update()
    {
        //TakePicture();
    }


    public void TakePicture()
    {
        StartCoroutine(SavePicture());
        /*
        imageFrontCam.gameObject.SetActive(false);
        buttonTakePicture.gameObject.SetActive(false);
        buttonDeletePicture.gameObject.SetActive(true);
        picture.gameObject.SetActive(true);*/   
        /*
        foreach (Touch touch in Input.touches)
        {
            if (touch.phase == TouchPhase.Began)
            {
                Debug.Log("press");

                StartCoroutine(SavePicture());
            }
        }*/

    }


    IEnumerator SavePicture()
    {
        

        ScreenCapture.CaptureScreenshot("somepicture.png");
        Debug.Log("save");

        yield return new WaitForSeconds(2);
        CheckForExistingImageAndLoad();
    }



    public void CheckForExistingImageAndLoad()
    {
        files = Directory.GetFiles(Application.persistentDataPath + "/", "*.png");
        if (files.Length>0)
        {
            Debug.Log("pictureExist");
            GetPictureAndShowIt();
        }
    }

    Texture2D GetScreenshotImage(string filePath)
    {
        Texture2D texture = null;
        byte[] fileBytes;
        if (File.Exists(filePath))
        {
            Debug.Log("tryRead");
            fileBytes = File.ReadAllBytes(filePath);
            Debug.Log(fileBytes);
            PersistentKeyValueImage.instance.fileBytesPicture = fileBytes;
            PersistentKeyValueImage.instance.OnSendImage();

            texture = new Texture2D(2, 2, TextureFormat.RGB24, false);
            texture.LoadImage(fileBytes);
            Debug.Log("SucessRead");
        }
        return texture;
    }

    public void GetPictureAndShowIt()
    {
        string pathToFile = files[0];
        Texture2D texture = GetScreenshotImage(pathToFile);
        /*
        Sprite sp = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height),
                        new Vector2(0.5f, 0.5f));
        picture.GetComponent<Image>().sprite = sp;

        */
        imageFrontCam.gameObject.SetActive(false);
        buttonTakePicture.gameObject.SetActive(false);
        buttonDeletePicture.gameObject.SetActive(true);
        pictures.gameObject.SetActive(true);
        
        Debug.Log("done");

    }

    public void OnClickDeletePicture()
    {
        imageFrontCam.gameObject.SetActive(true);
        buttonTakePicture.gameObject.SetActive(true);
        buttonDeletePicture.gameObject.SetActive(false);
        pictures.gameObject.SetActive(false);
        PersistentKeyValueImage.instance.doOnce = true;
    }
    

    public void SetupFrontCam()
    {
        defaultBackground = imageFrontCam.texture;
        WebCamDevice[] devices = WebCamTexture.devices;

        if (devices.Length == 0)
        {
            print("No camera found");
            camAvailable = false;
            return;
        }
        for (int i = 0; i < devices.Length; i++)
        {
            if (devices[i].isFrontFacing)
            {
                frontCam = new WebCamTexture(devices[i].name, Screen.width, Screen.height);
            }
        }
        if (frontCam == null)
        {
            print("Camera not found");
            return;
        }
        frontCam.Play();
        imageFrontCam.texture = frontCam;



        float ratio = (float)frontCam.width / (float)frontCam.height;
        fit.aspectRatio = ratio;

        //float scaleY = frontCam.videoVerticallyMirrored ? -1f : 1f;
        float scaleY = -1;
        //background.rectTransform.localScale = new Vector3(1f, scaleY, 1f);
        imageFrontCam.rectTransform.localScale = new Vector3(1f * ratio, scaleY * ratio, 1f * ratio);


        int orient = -frontCam.videoRotationAngle;
        imageFrontCam.rectTransform.localEulerAngles = new Vector3(0, 0, orient);
    }

    public void OnDisable()
    {
        frontCam.Stop();
    }

}