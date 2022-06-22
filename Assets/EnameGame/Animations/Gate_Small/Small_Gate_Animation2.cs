using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Small_Gate_Animation2 : MonoBehaviour
{
    private Animator _animator;

    // Use this for initialization
    void Start()
    {
        _animator = GetComponent<Animator>(); //put Animator in angle brackets

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player")
        {
            _animator.SetBool("open", true);
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player")
        {
            _animator.SetBool("open", false);
        }
    }

}