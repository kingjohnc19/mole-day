using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Quiz : MonoBehaviour
{
    public Button[] button;
    [TextArea(5, 5)]
    public string question;
    public int correctAns;
    public bool answered = false;
    public bool correct;
    public bool quizActive = false;
    public TextMeshProUGUI caption;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        switch (correctAns)
        {
            case 0:
                if (button[0].selected)
                {
                    answered = true;
                    correct = true;
                }
                else if (button[1].selected || button[2].selected)
                {
                    answered = true;
                    correct = false;
                }
                break;
            case 1:
                if (button[1].selected)
                {
                    answered = true;
                    correct = true;
                }
                else if (button[0].selected || button[2].selected)
                {
                    answered = true;
                    correct = false;
                }
                break;
            case 2:
                if (button[2].selected)
                {
                    answered = true;
                    correct = true;
                }
                else if (button[0].selected || button[1].selected)
                {
                    answered = true;
                    correct = false;
                }
                break;
        }

        if (answered && quizActive)
        {
            StartCoroutine(EndQuiz());
        }
    }

    public void StartQuiz()
    {
        foreach (Button but in button)
        {
            but.buttonActive();
        }
        caption.text = question;
        quizActive = true;
    }

    IEnumerator EndQuiz()
    {
        foreach (Button but in button)
        {
            but.buttonWrong();
        }
        button[correctAns].buttonRight();
        yield return new WaitForSeconds(5);
        foreach (Button but in button)
        {
            but.buttonInactive();
        }
        caption.text = "";
        quizActive = false;
    }
}
