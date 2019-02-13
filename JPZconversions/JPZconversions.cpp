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
	double miles;
	cout <<"Enter Distance in Miles"<< endl;
	cin >> miles;
	double kilometers;
	cout << "Distance in Kilometers" << endl;
	kilometers = miles * M;
	cout << setprecision(3) << kilometers <<  setw(5) << setfill('A');
	cout << "" << endl;
    return 0;
}

