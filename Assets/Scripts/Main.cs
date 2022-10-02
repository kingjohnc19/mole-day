using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main : MonoBehaviour
{
    public Quiz question1;
    public Quiz question2;
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
        if (question1.answered == true && question1.quizActive == false && question2.quizActive == false && question2.answered == false)
        {
            question2.StartQuiz();
        }
    }
}
