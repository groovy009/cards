#ifndef CARD_H
#define CARD_H

#include<iostream>
#include<vector>




class Card{
public:
	void showCard();
	Card(int, std::string);


private:
	int number;
	std::string suit;


};

#endif
