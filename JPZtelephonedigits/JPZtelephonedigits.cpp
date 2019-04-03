// JPZtelephonedigits.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//declare variables
	int counter = 0;
	
	char word = ' ';

	//prompt user to enter word to convert to phone number
	cout << "Enter a phone number in 7 letters only." << endl;

	//loop process to convert typed in word to phone number without area code
	for (counter = 0; counter < 7; counter++)
	{
		cin >> word;

		if (counter == 3) 
		{
			cout << '-';
		}

		if (isalpha(word))
			//switch statement to correspond letters with dial numbers
			switch (word)
			{
			case 'A':
			case 'a':
			case 'B':
			case 'b':
			case 'C':
			case 'c':
				cout << 2;
				break;
			case 'D':
			case 'd':
			case 'E':
			case 'e':
			case 'F':
			case 'f':
				cout << 3;
				break;
			case 'G':
			case 'g':
			case 'H':
			case 'h':
			case 'I':
			case 'i':
				cout << 4;
				break;

			case 'J':
			case 'j':
			case 'K':
			case 'k':
			case 'L':
			case 'l':
				cout << 5;
				break;
			case 'M':
			case 'm':
			case 'N':
			case 'n':
			case 'O':
			case 'o':
				cout << 6;
				break;
			case 'P':
			case 'p':
			case 'Q':
			case 'q':
			case 'R':
			case 'r':
			case 'S':
			case 's':
				cout << 7;
				break;

			case 'T':
			case 't':
			case 'U':
			case 'u':
			case 'V':
			case 'v':
				cout << 8;
				break;

			case 'W':
			case 'w':
			case 'X':
			case 'x':
			case 'Y':
			case 'y':
			case 'Z':
			case 'z':
				cout << 9;
				break;
			
			case 0:
				cout << 0;
				break;

			case'*':
				cout << '*';
				break;

			case'#':
				cout << '#';
				break;

			}

			//supposed to display error message if anything other thana letter is typed in
			else if(word != word)
				cout << "Invalid Entry" << endl;
		
	}

    return 0;
}

