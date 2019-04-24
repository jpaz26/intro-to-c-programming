// JPZRomanNumerals.cpp : Defines the entry point for the console application.
//
/*
* Name:Joshua Paz
* Section: COSC/ITSE 1301-002
* Homework: Roman Numerals
* Description: This program asks for a number input and converts that number into roman numerals.
*/

#include "stdafx.h"
#include <string>
#include <iostream>
#include "JPZRomanNumerals.h"
using namespace std;


/*JPZRomanNumerals::JPZRomanNumerals()
{
	
}


JPZRomanNumerals::~JPZRomanNumerals()
{
	
}
*/
int main()
{
	JPZRomanNumerals R;
	string rom = "";
	long int dec = 0;

	cout << "Enter any roman numeral:- ";
	cin >> rom;
	R.setter(rom);
	dec = R.getDecimal();

	cout << "Decimal equivalent is ";
	cout << dec << endl;

	return 0;
}