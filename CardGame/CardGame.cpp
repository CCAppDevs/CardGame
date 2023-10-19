#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

int main()
{
	Card aceOfHearts = Card();
	Card aceOfSpades = Card("Crows", 1);

	cout << aceOfHearts.toString() << endl;
	cout << aceOfSpades.toString() << endl;

	Deck myDeck = Deck();
	Card test = myDeck.Draw();
	Card test2 = myDeck.Draw();
	Card test3 = myDeck.Draw();

	cin.get();
}
