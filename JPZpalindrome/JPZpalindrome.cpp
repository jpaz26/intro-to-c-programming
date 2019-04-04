// JPZpalindrome.cpp :
// Joshua Paz; this program determines wheter a user entered word is a palindrome

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//this boolean function holds the algorithm that determines palindromes
bool isPalindrome(string str)
{
	int length = str.length();

	for (int i = 0; i < length / 2; i++)
		if (str[i] != str[length - 1 - i])
			return false;
	return true;
}

int main()
{
	//these are the variables for user inputs
	string word = " ";
	char choice = 'y';'n';
	
	//this do while loop prompts the user to enter a word, determines if the entered word is a palindrome, and repeats until user enters n.
	do
	{
	cout << "Please enter a word: ";
	cin >> word;
	cout << endl;

	//this if else statement calls back the function to determine palindromes
	if (isPalindrome(word))
		cout << "Is this a palindrome? Yes " << endl;
	else
		cout << "Is this a palindrome? No " << endl;
		
	//this prompts the user to enter y or n to repeat or end the program
		cout << "Would you like to enter another word y or n? ";
		cin >> choice;
		cout << endl;


	} 
	while (choice == 'y');

    return 0;
}




