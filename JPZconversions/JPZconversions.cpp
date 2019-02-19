// JPZconversions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>
#define M 1.609

using namespace std;


int main()
{
	//create variable for miles
	double miles;
	//create output prompting user to input the amount of miles
	cout <<"Enter Distance in Miles"<< endl;
	//create the user input for miles
	cin >> miles;
	//create variable for kilometers
	double kilometers;
	//create output for the conversion of miles to kilometers
	cout << "Distance in Kilometers" << endl;
	kilometers = miles * M;
	cout << setprecision(3) << kilometers <<  setw(5) << setfill('A');
	//space filler
	cout << "" << endl;
    return 0;
}

