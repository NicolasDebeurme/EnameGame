using UnityEngine;

[System.Serializable]
public class ActivateInRange
{
    public Animator Animator;

    public string ActivationButtonName;

    public ActivateInRange(Animator anim, string buttonName)
    {
        Animator = anim;
        ActivationButtonName = buttonName;
    }
}
