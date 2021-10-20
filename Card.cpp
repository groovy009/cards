#include <iostream>
#include<vector>
#include "Card.h"

using namespace std;

Card::Card(int num, string sewt){
	number = num;
	suit = sewt;
}

void Card::showCard(){


	if (number <1){
		cout<<"Card Error: number is negative or zero." <<endl;
	}

	else if (number < 2){
		cout<< "Ace of "<< suit <<endl;
	}
	else if (number < 11){
		cout<< number << " of "<< suit <<endl;

	}

	else if (number ==11){
		cout <<"Jack of " << suit <<endl;
	}

	else if( number==12){
		cout <<"Queen of "<< suit <<endl;
	}

	else if (number==13){
		cout <<"King of "<< suit <<endl;
	}

	else if (number == 14){
		cout<< "Ace of "<< suit <<endl;
	}

	else{
		cout<< "Card Error: number is over 13. " <<endl;
	}
}