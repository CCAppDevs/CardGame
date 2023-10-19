#pragma once
#include "Card.h"
#include <vector>

class Deck
{
private:
	int NumCardsLeft;
	std::vector<Card> Cards;
	bool IsShuffled;

public:
	Deck();
	Deck(std::vector<Card> cards);

	void Reset();

	void Shuffle();
	
	Card Draw();
	
	void AddCard(Card newCard);

};

