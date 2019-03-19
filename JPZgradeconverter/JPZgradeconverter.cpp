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
	double grade = 0.0;
	char lgrade;

	// prompt user to enter a double point grade and a letter grade
	cout << "Please enter grade: ";
	cin >> grade;
	cout << endl;

	cout << "Please enter a letter grade: ";
	cin >> lgrade;
	cout << endl;

	// create if statements to print out letter grades
	if (grade <= 100 && grade >= 89.5)
	{
		cout << "You have an A!" << endl;
	}
	

	else if (grade >= 79.5)
	{
		cout << "You have a B!" << endl;
	}

	else if (grade >= 69.5)
	{
		cout << "You have a C!" << endl;
	}

	else if (grade <= 69.5)
	{
		cout << "You have an F!" << endl;
	}

	// create switch statements to print out grade ranges for letter grades
	switch (toupper(lgrade)) {
	
	case 'A':
		cout << "Your grade was between 90 and 100." << endl;
		break;

	case'B':
		cout << "Your grade was between 80 and 89." << endl;
		break;

	case'C':
		cout << "Your grade was between 70 and 79." << endl;
		break;

	case'F':
		cout << "Your grade was between 0 and 69." << endl;
		break;

	}
    return 0;
}

