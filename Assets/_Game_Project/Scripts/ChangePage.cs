using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class ChangePage : MonoBehaviour
{
    public Animator animator;

    public SpriteRenderer sprite1, sprite2;

    public List<Sprite> sprites = new List<Sprite>();

    int currentSprite = 0;

    bool animating = false;

    private void Start()
    {
        sprite1.sprite = sprites[currentSprite];
    }

    public void FinishedSwitchForward()
    {
        sprite1.sprite = sprites[currentSprite];
        animating = false;
        animator.SetTrigger("ForwardEnd");
    }

    public void FinishedSwitchBackward()
    {
        sprite1.sprite = sprites[currentSprite];
        animating = false;
        animator.SetTrigger("BackwardEnd");
    }

    public void Switch(int direction)
    {
        if (!animating)
        {
            int newIndex = currentSprite + direction;

            if (newIndex >= sprites.Count)
            {
                newIndex = 0;
            }

            if (newIndex < 0)
            {
                newIndex = sprites.Count - 1;
            }

            if (direction > 0 && newIndex < sprites.Count)
            {
                sprite2.sprite = sprites[newIndex];
                currentSprite = newIndex;
                animator.SetTrigger("Forward");
                animating = true;
            }

            if (direction < 0 && newIndex >= 0)
            {
                sprite2.sprite = sprites[currentSprite];
                sprite1.sprite = sprites[newIndex];
                currentSprite = newIndex;
                animator.SetTrigger("Backward");
                animating = true;
            }
        }
    }
}
