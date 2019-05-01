// JPZblackjack.cpp : Defines the entry point for the console application.
/*
* Name: Joshua Paz
*Section : COSC / ITSE 1307
* Homework JPZBlackjack
* Description: Takes input from the and returns randomized order of cards in the form of a blackjack game.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "player.h"
#include "deck.h"
#include "card.h"
using namespace std;


int main()
{
	srand(time(NULL));

	// These variables are made for the dealer,player, and deck
	Player objDealer;
	Player objPlayer;
	Deck objDeck = Deck(4);
	
		//objDealer is set to display the name "Dealer" and objPlayer.InputPlayerName is input from the player to enter a name.
		objDealer.setPlayerName("Dealer");
		objPlayer.inputPlayerName();
		
		//These lines output the dealer and player names
		cout << objDealer.toString() << endl;
		cout << objPlayer.toString() << endl;

		//this line shuffles the deck to ensure randomized order of cards
		objDeck.shuffle();

		//lines 41 - 53 acts as the dealer handing out the cards to both the dealer and player and determines when to add
		//a card
		for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {

			objDealer.addCard(objDeck.getCard());
			objPlayer.addCard(objDeck.getCard());

		}


		while (objDealer.getHandPointValue() <= 16) {

			objDealer.addCard(objDeck.getCard());

		}

		cout << objDealer.toString() << endl;
		cout << objPlayer.toString() << endl;

		//this shuffles the deck once more
		if (objDeck.shouldShuffle()) {

			objDeck.shuffle();

		}
		// if the dealers hand is greater and closer to 21 the dealer wins
		if (objDealer.getHandPointValue() > objPlayer.getHandPointValue()) {

			cout << "Dealer wins!!!" << endl;
		}
		//if the players hand goes over 21 the dealer wins
		else if (objPlayer.getHandPointValue() > 21) {
			cout << "Dealer wins!!!" << endl;
		}
		//if the dealers hand goes over 21 the player wins
		else if (objDealer.getHandPointValue() > 21) {
			cout << "Player wins!!!" << endl;
		}
		//if the dealers hand isn't higher or closer to 21 the player wins
		else {
			cout << "Player wins!!!" << endl;
		}


    return 0;
}

