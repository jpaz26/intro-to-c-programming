// JPZPhoneBook.cpp : Defines the entry point for the console application.
/*
* Name: Joshua Paz
* Section: COSC/ITSE 1307
* Homework: Phone Book
* Description: This program prompts the user to make a choice from the printed menu and allows the user to input a names and numbers the program will
* will save the contacts and the user will have the options to edit, delete a single contact, print out contacts, or clear all contacts
*/


#include "stdafx.h"
#include <iostream>
#include "Contact.h"
#include "PhoneBook.h"

//this function is responsible for printing out the menu interface the user uses to use the following menu functions
void Menu() {

	std::cout << "Welcome to Phone Book" << std::endl;
	std::cout << "--------------------- " << std::endl;
	std::cout << "(a)dd a contact" << std::endl;
	std::cout << "(e)dit a contact" << std::endl;
	std::cout << "(d)elete a contact" << std::endl;
	std::cout << "(p)rint contacts" << std::endl;
	std::cout << "(c)lear all contacts" << std::endl;
	std::cout << "(q)uit" << std::endl;
	std::cout <<" " << std::endl;

}


//this function is used in the delete contact option to choose which contact to delete
int getIndex(PhoneBook objpPhoneBook) {

	objpPhoneBook.printContacts();
	int intIndex = 0;
	
	do {
		
		std::cout << "Please enter the number next to the contact: ";
		std::cin >> intIndex;

	} while (intIndex <= 0);

	return intIndex;

}



int main()

{
	//thse variables represent the choices for the menu, contact, and phone book
	PhoneBook objPhoneBook;
	Contact objContact;
	char chrMenuChoice = ' ';
	int intContact = 0;


	//do while loop runs the switch statement until the user types q to quit
	do {

		Menu();

		std::cin >> chrMenuChoice;
		chrMenuChoice = tolower(chrMenuChoice);

		switch (chrMenuChoice) {
		//case a adds contacts
		case 'a':
			objContact.input();
			objPhoneBook.addContact(objContact);
			break;
		//case e lets the user edit the saved contacts
		case 'e':
			intContact = getIndex(objPhoneBook);
			intContact--;
			objPhoneBook.editContact(intContact);
			break;
		//case d lets the user delete contacts of their choice by typing in the number
		case 'd':

			intContact = getIndex(objPhoneBook);
			intContact--;
			objPhoneBook.deleteContact(intContact);
			break;
		//case p prints out contacts saved in program
		case 'p':

			objPhoneBook.printContacts();
			break;
		//case q ends the program
		case 'q':

			break;
		//case c clears all saved contacts
		case 'c':

			objPhoneBook.clearContacts();
			break;
		//default error printout if the user types in wrong case
		default:

			std::cerr << "Invalid Input";
			break;

		}

		//condition ends loop if the case q is used
	} while (chrMenuChoice != 'q');
	
	return 0;
}