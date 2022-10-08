using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class Main : MonoBehaviour
{
    public CollisionTrigger doorTrigger;
    private bool alreadyTriggered = false;
    public Animator doorAnim;
    public Animator moleAnim;
    public Button startButton;
    public int questionsAnswered;
    public int questionsCorrect;
    public TextMeshProUGUI scoreText;
    public Quiz question1;
    public Quiz question2;
    public Quiz question3;
    public Quiz question4;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (doorTrigger.triggered && !alreadyTriggered)
        {
            startButton.anim.SetBool("Up", true);
            startButton.buttonActive();
            alreadyTriggered = true;
        }

        if (question1.quizActive == false && question1.answered == false && startButton.selected)
        {
            startButton.buttonInactive();
            startButton.anim.SetBool("Up", false);
            moleAnim.SetTrigger("move1to2");
            doorAnim.SetBool("Closed", true);
            question1.StartQuiz();
        }
        if (question1.answered == true && question1.quizActive == false && question2.quizActive == false && question2.answered == false)
        {
            if (question1.correct)
            {
                questionsCorrect++;
            }
            questionsAnswered++;
            GameObject.Destroy(question1.gameObject);
            question2.StartQuiz();
        }
        if (question2 != null && question2.answered == true && question2.quizActive == false && question3.quizActive == false && question3.answered == false)
        {
            if (question2.correct)
            {
                questionsCorrect++;
            }
            questionsAnswered++;
            GameObject.Destroy(question2.gameObject);
            question3.StartQuiz();
        }
        if (question3 != null && question3.answered == true && question3.quizActive == false && question4.quizActive == false && question4.answered == false)
        {
            if (question3.correct)
            {
                questionsCorrect++;
            }
            questionsAnswered++;
            GameObject.Destroy(question3.gameObject);
            question4.StartQuiz();
        }
        if (question4 != null && question4.answered == true && question4.quizActive == false)
        {
            if (question4.correct)
            {
                questionsCorrect++;
            }
            questionsAnswered++;
            GameObject.Destroy(question4.gameObject);
        }

        if (questionsAnswered != 0)
        {
            int percentageScore = Mathf.RoundToInt(((float)questionsCorrect / questionsAnswered) * 100);
            scoreText.text = "Score: " + percentageScore + "% (" + questionsCorrect + "/" + questionsAnswered + ")";
        }
    }
}
