using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class Main : MonoBehaviour
{
    public CollisionTrigger doorTrigger;
    private bool doorAlreadyTriggered = false;

    public Animator doorAnim;
    public Animator moleAnim;

    public Button startButton;

    public int questionsAnswered;
    public int questionsCorrect;

    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI captionText;

    public CollisionTrigger[] stopTrigger;

    public Quiz question1;
    public Quiz question2;
    public Quiz question3;
    public Quiz question4;

    private bool[] sequenceStarted;
    private bool[] sequenceEnded;

    // Start is called before the first frame update
    void Start()
    {
        sequenceStarted = new bool[3];
        sequenceEnded = new bool[3];
    }

    // Update is called once per frame
    void Update()
    {
        if (doorTrigger.triggered && !doorAlreadyTriggered)
        {
            startButton.anim.SetBool("Up", true);
            startButton.buttonActive();
            doorAlreadyTriggered = true;
        }

        if (question1.quizActive == false && question1.answered == false && startButton.selected)
        {
            startButton.buttonInactive();
            startButton.anim.SetBool("Up", false);
            moleAnim.SetTrigger("move1to2");
            doorAnim.SetBool("Closed", true);
            if (!sequenceStarted[0])
            {
                StartCoroutine(captionSeq0());
            }
            if (stopTrigger[0].triggered && sequenceEnded[0])
            {
                question1.StartQuiz();
            }
        }
        if (question1.answered && !question1.quizActive && !question2.quizActive && !question2.answered)
        {
            if (question1.correct)
            {
                questionsCorrect++;
            }
            questionsAnswered++;
            GameObject.Destroy(question1.gameObject);
            question2.StartQuiz();
        }
        if (question2 != null && question2.answered && !question2.quizActive && !question3.quizActive && !question3.answered)
        {
            if (question2.correct)
            {
                questionsCorrect++;
            }
            questionsAnswered++;
            GameObject.Destroy(question2.gameObject);
            question3.StartQuiz();
        }
        if (question3 != null && question3.answered && !question3.quizActive && !question4.quizActive && !question4.answered)
        {
            if (question3.correct)
            {
                questionsCorrect++;
            }
            questionsAnswered++;
            GameObject.Destroy(question3.gameObject);
            question4.StartQuiz();
        }
        if (question4 != null && question4.answered && !question4.quizActive)
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

    IEnumerator captionSeq0 ()
    {
        sequenceStarted[0] = true;
        captionText.text = "Welcome to the Submoleine!";
        yield return new WaitForSeconds(28f);
        captionText.text = "Looks like Nemo will only let you pass if you answer 4 mole questions...";
        yield return new WaitForSeconds(5f);
        sequenceEnded[0] = true;
    }
}
