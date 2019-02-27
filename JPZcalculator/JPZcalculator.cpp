// JPZcalculator.cpp : Defines the entry point for the console application.
//Joshua Paz intro to c++ this application is used to determine the value of c

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>


int main()
{
	// establish and initialize variables
	double inta = 0.0;
	double intb = 0.0;
	double intc = 0.0;
	double intc2 = 0.0;
	double intc3 = 0.0;

	// create output prompting for user input
	cout << "Enter a: ";
	// create input
	cin >> inta;
	cout << endl;

	// create output prompting for user input
	cout << "Enter b: ";
	// create input
	cin >> intb;
	cout << endl;

	// create the equation that is going to be used by the program
	double a = inta;
	double b = intb;
	intc = a * b;
	intc2 = a - b;
	intc3 = intc / intc2;

	// display the result
	cout << "c = " << setprecision(3) << intc3 << endl;
    return 0;
}

