using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExtraScreenHandler : MonoBehaviour
{
    public string argument = "-argument";

    private void Awake()
    {
        var args = System.Environment.GetCommandLineArgs();

        //for (int i = 0; i < args.Length; i++)
        //{
        //    if (args[i] == argument && args.Length > i + 1)
        //    {
                EnableScreens();
        //    }
        //}
    }

    void EnableScreens()
    {
        for (int i = 1; i < Display.displays.Length; i++)
        {
            Display currentDisplay = Display.displays[i];

            currentDisplay.Activate();
            currentDisplay.SetRenderingResolution(currentDisplay.renderingWidth, currentDisplay.renderingHeight);
        }
    }
}
