#pragma once
#include <string>

class Card
{

private:
	std::string Suit;
	unsigned int Rank;

public:
	// need set it up for first use (constructor)
	Card();
	Card(std::string suit, int rank);

	// return a string representation (ToString method)
	std::string toString();
};

