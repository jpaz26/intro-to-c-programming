// JPZgameImprovement.cpp : Defines the entry point for the console application.
//Joshua Paz; adding features to current program 

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
	srand(time(NULL)); //Get random time
	
	int tries = 5;//set number of guess attempts
	int intLimit = 100; //Set limit for guess
	int intGuess = rand() % intLimit + 1; //Give me a number between 0 and 51 then add 1.
	int intCurrentGuess = 1;
	int hint = intGuess - 5;//a number in range of the answer

	do { //Not equal to guess



		do { //User Input

			cout << "Please enter a number between 1 and " << intLimit << ": ";

			cin >> intCurrentGuess;


		} while (intCurrentGuess < 1 || intCurrentGuess > intLimit);



		if (intCurrentGuess > intGuess) {

			tries--;
			cout << "You guessed to high! You have " << tries << " tries left" << endl;
			cout << "Here's a clue: " << hint << endl;
		}

		else if (intCurrentGuess < intGuess) {

			tries--;
			cout << "You guessed to low! You have " << tries << " tries left" << endl;
			cout << "Here's a clue: " << hint << endl;

		}

		else {

			cout << "You guessed wisely! Congrats YOU WIN NOTHING!" << endl;
			

		}

		if (tries <= 0) {
			cout << "Sorry :(, Please try again." << endl;
		}

	} while (intCurrentGuess != intGuess && tries > 0);


    return 0;
}

