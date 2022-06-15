using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Screenshot : MonoBehaviour
{
    private Camera cam;

    [SerializeField]
    private string folderName = "Screenshots";
    private string fullPath;

    // Start is called before the first frame update
    void Start()
    {
        cam = gameObject.GetComponent<Camera>();

        //Create path string
        fullPath = Path.GetFullPath(string.Format(@"{0}/", folderName));

        //Check if path exists and create when it doesn't
        if (!Directory.Exists(fullPath))
            Directory.CreateDirectory(fullPath);
    }

    private void Update()
    {
        if (Input.GetKey(KeyCode.KeypadDivide))
        {
            if (Input.GetKeyDown(KeyCode.Keypad1))
            {
                CreateScreenshot(Screen.width, Screen.height);
            }

            if (Input.GetKeyDown(KeyCode.Keypad2))
            {
                CreateScreenshot(Screen.width * 2, Screen.height * 2);
            }

            if (Input.GetKeyDown(KeyCode.Keypad3))
            {
                CreateScreenshot(Screen.width * 3, Screen.height * 3);
            }

            if (Input.GetKeyDown(KeyCode.Keypad4))
            {
                CreateScreenshot(Screen.width * 4, Screen.height * 4);
            }

            if (Input.GetKeyDown(KeyCode.Keypad5))
            {
                CreateScreenshot(Screen.width * 5, Screen.height * 5);
            }

            if (Input.GetKeyDown(KeyCode.Keypad6))
            {
                CreateScreenshot(1920, 1080);
            }

            if (Input.GetKeyDown(KeyCode.Keypad7))
            {
                CreateScreenshot(3840, 2160);
            }

            if (Input.GetKeyDown(KeyCode.Keypad8))
            {
                CreateScreenshot(7680, 4320);
            }
        }
    }

    private void CreateScreenshot(int width, int height)
    {
        StartCoroutine(RenderShot(width, height));
    }

    private IEnumerator RenderShot(int width, int height)
    {
        yield return new WaitForEndOfFrame();

        cam.targetTexture = RenderTexture.GetTemporary(width, height, 16);

        cam.Render();

        RenderTexture.active = cam.targetTexture;

        RenderTexture renderTexture = cam.targetTexture;

        //Retrieve temporary render as texture
        Texture2D renderResult = new Texture2D(renderTexture.width, renderTexture.height, TextureFormat.ARGB32, false);

        //Gather pixels from texture
        renderResult.ReadPixels(new Rect(0, 0, renderTexture.width, renderTexture.height), 0, 0);

        //Apply pixels
        renderResult.Apply();

        //Save to file
        DateTime timestamp = DateTime.Now;
        string filePathf = string.Format(fullPath + $"Screenshot_{timestamp:yyyy_MM_dd_HH_mm_ss}.png");

        StartCoroutine(SaveFilePNG(filePathf, renderResult));

        //Reset camera
        RenderTexture.ReleaseTemporary(renderTexture);

        cam.targetTexture = null;
    }

    private IEnumerator SaveFilePNG(string filePath, Texture2D SShot)
    {
        yield return null;

        Debug.Log("Saving to: " + filePath);

        byte[] bytes = SShot.EncodeToPNG();

        File.WriteAllBytes(filePath, bytes);
    }
}
