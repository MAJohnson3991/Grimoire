#pragma once
#include "effectGlyph.h"
#include <iostream>

class spell
{

public:

	void displaySpell();
	std::string spellSchool = "Evocation";
	std::string spellShape = "None";
	int shapeNumber = 0;
	std::string spellElem = "None";
	int elemNumber = 0;
	effectGlyph spellEffects[10];
	int effectNumber = 0;

private:

};