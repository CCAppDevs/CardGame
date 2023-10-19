#include "Card.h"

Card::Card()
{
	Suit = "Hearts";
	Rank = 1;
}

Card::Card(std::string suit, int rank)
{
	Suit = suit;
	Rank = rank;
}

std::string Card::toString()
{
	std::string val = "";

	if (Rank == 1) {
		val = "Ace";
	}
	else if (Rank == 11) {
		val = "Jack";
	}
	else if (Rank = 12) {
		val = "Queen";
	}
	else if (Rank = 13) {
		val = "King";
	}
	else {
		val = std::to_string(Rank);
	}

	return val + " of " + Suit;
}
