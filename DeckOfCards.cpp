#include<iostream>
#include<vector>
#include<algorithm>
#include<random>

#include "DeckOfCards.h"


using namespace std;

DeckOfCards::DeckOfCards(){
	deck.clear();
	for (int i =0; i < 4; i++){
		for (int j=2; j<15; j++){
			deck.push_back(Card(j,suitSet[i]));
		}
	}


}

void DeckOfCards::printDeck(){
	for (int i=0; i < deck.size(); i++){
		deck.at(i).showCard();
	}


}

void DeckOfCards::resetDeck(){
	deck.clear();
	for (int i =0; i < 4; i++){
		for (int j=2; j<15; j++){
			deck.push_back(Card(j,suitSet[i]));
		}
	}
}

void DeckOfCards::shuffleDeck(){

	random_device rd;
    default_random_engine rng(rd());
    shuffle(deck.begin(), deck.end(), rng);



	
}


