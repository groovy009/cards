#include<iostream>
#include<vector>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

int main(){
	// Card temp(4,"Spades") ;
	// Card temp2(13, "Hearts");
	// Card temp3(1, "Clubs");
	

	// temp.showCard();
	// temp2.showCard();
	// temp3.showCard();

	DeckOfCards newDeck;

	newDeck.printDeck();
	cout <<endl;

	newDeck.shuffleDeck();
	newDeck.printDeck();
	
	newDeck.resetDeck();
	//newDeck.printDeck();
	

	





	
}