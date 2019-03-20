// JPZgradeconverter.cpp : Defines the entry point for the console application.
// Joshua Paz this program takes grade points and converts them to letter grades

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;


int main()
{
	// declare variables for grades
	int grade = 0;
	

	// prompt user to enter a double point grade
	cout << "Please enter grade: ";
	cin >> grade;
	cout << endl;

	// create if statements to print out letter grades
	if (grade <= 100 && grade >= 89)
	{
		cout << "You have an A!" << endl;
	}
	

	else if (grade >= 79)
	{
		cout << "You have a B!" << endl;
	}

	else if (grade >= 69)
	{
		cout << "You have a C!" << endl;
	}

	else if (grade <= 69)
	{
		cout << "You have an F!" << endl;
	}

	// create switch statements to print out grade ranges for letter grades
	cout << "Switch: ";

	switch(grade / 10) {

	case 9: case 10:
		cout << "You have an A!" << endl;
		break;

	case 8:
		cout << "You have a B!" << endl;
		break;

	case 7:
		cout << "You have a C!" << endl;
		break;

	case 6:
		cout << "You have an F!" << endl;
		break;

	}
    return 0;
}

