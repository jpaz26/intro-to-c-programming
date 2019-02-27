// JPZbusinesscardoutput.cpp : Defines the entry point for the console application.
// Joshua Paz intro to c++

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ofstream fileVC;

	fileVC.open("vcard.vcf"); // opens vcard file

	fileVC << "BEGIN:VCARD" << endl; // begins vcard file

	fileVC << "VERSION:4.0" << endl; // version format

	fileVC << "N:Paz;Joshua" << endl; // display of first and last name
	fileVC << "ORG:EAGamesStudios" << endl; // displays company
	fileVC << "TITLE:Quality Assurance Tester" << endl; // displays job title
	fileVC << "TEL;TYPE=work,voice;VALUE=uri:tel:+1-817-723-2625" << endl; // displays telephone number
	fileVC << "ADR;TYPE=WORK;PREF=1;LABEL=11019DublinLedge\nSanAntonio,TX78254\nUnitedStatesofAmerica:"<< endl; // displays address
	fileVC << "EMAIL:jshpz031@gmail.com" << endl; // displays email address
	

	fileVC << "END:VCARD" << endl; // ends vcard file

	fileVC.close(); // closes vcard file
    return 0;
}

