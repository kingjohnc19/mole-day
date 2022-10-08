using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SubmarineWater : MonoBehaviour
{
    public GameObject subWater;
    public GameObject water;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(subWater.activeSelf)
        {
            water.SetActive(false);
            subWater.transform.position = new Vector3(32.01162f, -10.9403f, 42.04419f);
        } else
        {
            water.SetActive(true);
        }
    }
}
