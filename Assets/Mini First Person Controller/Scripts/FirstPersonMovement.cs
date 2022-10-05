using System.Collections.Generic;
using UnityEngine;

public class FirstPersonMovement : MonoBehaviour
{
    public float speed = 5;
    public GameObject cursor;
    public GameObject pointer;
    public bool hovering;
    public GameObject camera;
    [Header("Running")]
    public bool canRun = true;
    public bool IsRunning { get; private set; }
    public float runSpeed = 9;
    public KeyCode runningKey = KeyCode.LeftShift;
    public GameObject tint;
    private bool touchingWater;
    private bool inSubmarine;
    public Material skybox;
    public Material darkSkybox;

    Rigidbody rigidbody;
    /// <summary> Functions to override movement speed. Will use the last added override. </summary>
    public List<System.Func<float>> speedOverrides = new List<System.Func<float>>();



    void Awake()
    {
        // Get the rigidbody on this.
        rigidbody = GetComponent<Rigidbody>();
    }

    void FixedUpdate()
    {
        // Update IsRunning from input.
        IsRunning = canRun && Input.GetKey(runningKey);

        // Get targetMovingSpeed.
        float targetMovingSpeed = IsRunning ? runSpeed : speed;
        if (speedOverrides.Count > 0)
        {
            targetMovingSpeed = speedOverrides[speedOverrides.Count - 1]();
        }

        // Get targetVelocity from input.
        Vector2 targetVelocity =new Vector2( Input.GetAxis("Horizontal") * targetMovingSpeed, Input.GetAxis("Vertical") * targetMovingSpeed);

        // Apply movement.
        rigidbody.velocity = transform.rotation * new Vector3(targetVelocity.x, rigidbody.velocity.y, targetVelocity.y);

        //Cursor
        RaycastHit hit;
        
        if (Physics.Raycast(camera.transform.position, camera.transform.TransformDirection(Vector3.forward), out hit, 2))
        {
            if (hit.collider.tag == "Interactable")
            {
                cursor.SetActive(false);
                pointer.SetActive(true);
                hovering = true;
            } else
            {
                cursor.SetActive(true);
                pointer.SetActive(false);
                hovering = false;
            }
        } else
        {
            cursor.SetActive(true);
            pointer.SetActive(false);
        }

        if (touchingWater && !inSubmarine)
        {
            tint.SetActive(true);
        } else
        {
            tint.SetActive(false);
        }
    }

    private void OnTriggerEnter(Collider collision)
    {
        if (collision.transform.tag == "Water")
        {
            touchingWater = true;
            RenderSettings.ambientLight = Color.black;
            RenderSettings.skybox = darkSkybox;
            RenderSettings.fogColor = Color.black;
            RenderSettings.fogStartDistance = 5;
            RenderSettings.fogEndDistance = 20;
        }
        if (collision.transform.tag == "Submarine")
        {
            inSubmarine = true;
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (collision.transform.tag == "Water")
        {
            touchingWater = false;
            RenderSettings.ambientLight = Color.gray;
            RenderSettings.skybox = skybox;
            RenderSettings.fogColor = Color.white;
            RenderSettings.fogStartDistance = 15;
            RenderSettings.fogEndDistance = 85;
        }
        if (collision.transform.tag == "Submarine")
        {
            inSubmarine = false;
        }
    }
}