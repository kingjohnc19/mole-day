using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main : MonoBehaviour
{
    public Quiz question1;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (question1.quizActive == false && question1.answered == false)
        {
            question1.StartQuiz();
        }
    }
}
