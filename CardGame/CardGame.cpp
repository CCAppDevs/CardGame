#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
	Card aceOfHearts = Card();
	Card aceOfSpades = Card("Crows", 1);

	cout << aceOfHearts.toString() << endl;
	cout << aceOfSpades.toString() << endl;
}
