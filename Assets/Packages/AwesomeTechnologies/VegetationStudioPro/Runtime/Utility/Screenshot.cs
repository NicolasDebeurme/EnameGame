using System;
using UnityEngine;
namespace AwesomeTechnologies.Utility
{
    [AwesomeTechnologiesScriptOrder(250)]
    public class Screenshot: MonoBehaviour
    {
        public string screenCaptureButtonName;
        public string fileName;

        public int screenResolutionMultiplier = 1;

        public void TakeScreenshot()
        {
            DateTime currentTime = DateTime.Now;

            string fileLocation = Application.persistentDataPath + "/" + fileName + "_" +
                currentTime.Day + "_" + currentTime.Month + "_" + currentTime.Year + "_" +
                currentTime.Hour + "h" + currentTime.Minute + "m" + currentTime.Second + "s" + ".png";

            Debug.Log("Screenshot saved at " + fileLocation);
            ScreenCapture.CaptureScreenshot(fileLocation, screenResolutionMultiplier);
        }

        void LateUpdate()
        {
            if (Input.GetButtonDown(screenCaptureButtonName))
            {
                TakeScreenshot();
            }
        }
    }
}