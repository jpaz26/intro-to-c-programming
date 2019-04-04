// JPZvowelfunction.cpp
// Joshua paz; this program takes a letter and returns a value to determine if the letter is a vowel

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//function containg boolean to return true or false if an entered letter is a vowel or not
bool isVowel(char ch)
{
	char letter = ' ';
	switch(ch) {

	case'a':
		return true;
		break;

	case'e':
		return true;
		break;

	case'i':
		return true;
		break;

	case'o':
		return true;
		break;

	case'u':
		return true;
		break;
	
	default:
		return false;
	}
}


int main()
{
	//variables for entered letters and choice to repeat to program
	char letter = toupper(' ');
	char choice = toupper('n'); 'y';

	//this do while loop to repeat program and will end if user enters n
	do
	{
		//this will prompt the user to enter any letter in the alphabet
		cout << "Please enter a letter: ";
		cin >> letter;
		cout << endl;
		
		//this if else statements will print out if the letter is a vowel or not a vowel
		if (isVowel(letter)) {
			cout << "Is a vowel." << endl;
		}
		else {
			cout << "Is not a vowel." << endl;
		}
		//this prints out a question asking the user to enter y or n to end or repeat the program
		cout << "Do you want to enter anothr letter y or n? ";
		cin >> choice;
		cout << endl;
	} 
	while (choice== 'y');
    return 0;
}

