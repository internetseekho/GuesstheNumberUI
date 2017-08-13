using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GuessTheNumberUi : MonoBehaviour {

    public Text text;

    int max = 100;
    int min = 1;
    int guess;

    int maxGuessAllowed = 10;

	// Use this for initialization
	void Start () {
        StartGame();	
	}

    void StartGame() {

        NextGuess();

    }

    public void GuessHigher() {

        min = guess;
        print( "Please guess heigher" );
        NextGuess();

    }

    public void GuessLower()
    {
        max = guess;
        print("Please guess Lower");
        NextGuess();

    }

    void NextGuess(){
        //guess = (max + min) / 2;
        guess = Random.Range( min, max + 1 );
        print("Computer guessed " + guess);
        text.text = guess.ToString();
        maxGuessAllowed--;
        if ( maxGuessAllowed <= 0 ) {
            Application.LoadLevel("Win");
        }
    }

}
