#include "Deck.h"

Deck::Deck()
{
	NumCardsLeft = 0;
	IsShuffled = false;

	Reset();
}

Deck::Deck(std::vector<Card> cards)
{
	Cards = cards;
	NumCardsLeft = Cards.size();
	IsShuffled = false;
}

void Deck::Reset()
{
	// clear the cards already in the deck
	Cards.clear();

	// add cards till we are the right setup
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 13; j++) {
			std::string suit = "";
			
			switch (i) {
			case 1:
				// create a heart
				suit = "Heart";
				break;
			case 2:
				// create a club
				suit = "Club";
				break;
			case 3:
				// create a diamond
				suit = "Diamond";
				break;
			case 4:
				// create a spade
				suit = "Spade";
				break;
			default:
				break;
			}

			Card theCard;
			theCard = Card(suit, j);
			AddCard(theCard);
		}
	}
}

void Deck::Shuffle()
{
	// get the random device
	// use it to shuffle the deck
}

Card Deck::Draw()
{
	Card drawn;

	drawn = Cards[0];
	Cards.erase(Cards.begin());
	NumCardsLeft--;

	return drawn;
}

void Deck::AddCard(Card newCard)
{
	Cards.push_back(newCard);
	NumCardsLeft++;
}
