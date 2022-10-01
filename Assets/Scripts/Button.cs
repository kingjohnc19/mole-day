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

    // Start is called before the first frame update
    void Start()
    {
        cursor.SetActive(false);
        buttonInactive();
    }

    // Update is called once per frame
    void Update()
    {
        if (cursorHovering && active && Vector3.Distance(transform.position, player.transform.position) <= 2)
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
    }

    public void buttonInactive()
    {
        GetComponent<MeshRenderer>().material = inactiveMat;
        letter.SetActive(false);
        active = false;
    }

    public void buttonWrong()
    {
        GetComponent<MeshRenderer>().material = wrongMat;
        active = false;
    }

    public void buttonRight()
    {
        GetComponent<MeshRenderer>().material = rightMat;
        active = false;
    }
}
