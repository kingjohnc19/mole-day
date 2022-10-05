using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Button : MonoBehaviour
{
    public GameObject cursor;
    public GameObject player;
    public GameObject letter;
    private bool cursorHovering = false;
    private bool active = false;
    public bool selected = false;
    public Material activeMat;
    public Material inactiveMat;
    public Material wrongMat;
    public Material rightMat;
    public Animator anim;

    // Start is called before the first frame update
    void Start()
    {
        cursor.SetActive(false);
        buttonInactive();
    }

    // Update is called once per frame
    void Update()
    {
        if (cursorHovering && active && player.GetComponent<FirstPersonMovement>().hovering)
        {
            if (Input.GetMouseButtonDown(0))
            {
                selected = true;
            }
        }
    }

    private void OnMouseEnter()
    {
        cursorHovering = true;
    }

    private void OnMouseExit()
    {
        cursorHovering = false;
    }

    public void buttonActive()
    {
        GetComponent<MeshRenderer>().material = activeMat;
        letter.SetActive(true);
        active = true;
        gameObject.tag = "Interactable";
    }

    public void buttonInactive()
    {
        GetComponent<MeshRenderer>().material = inactiveMat;
        letter.SetActive(false);
        active = false;
        gameObject.tag = "Untagged";
    }

    public void buttonWrong()
    {
        GetComponent<MeshRenderer>().material = wrongMat;
        active = false;
        gameObject.tag = "Untagged";
    }

    public void buttonRight()
    {
        GetComponent<MeshRenderer>().material = rightMat;
        active = false;
        gameObject.tag = "Untagged";
    }
}
