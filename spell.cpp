#include "spell.h"
#include <iostream>
using namespace std;

void spell::displaySpell()
{
	int i = 0;
	
	cout << "School: " << spellSchool << "     Shape: " << spellShape;
	if (shapeNumber > 0) 
		cout << " " << shapeNumber;
	cout << "\n";
	cout << "Element: " << spellElem << "     Damage: " << elemNumber << "\n";

	for (i = 0; i < effectNumber; i++) {
		cout << (spellEffects[i].effectDesc);
	}

	cout << "\n";
}