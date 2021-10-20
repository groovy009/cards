#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include<iostream>
#include<vector>
#include "Card.h"



class DeckOfCards{
public:
	DeckOfCards();
	void printDeck();
	void shuffleDeck();
	void dealCards(int);
	void resetDeck();
	

private:
	std::vector<Card> deck;
	std::string suitSet[4] = {"Spades" , "Diamonds", "Clubs", "Hearts"};
	
	




};
#endif