#include <iostream>
#include <cstdlib>
#include <ctime>
#include "spell.h"
#include "effectGlyph.h"
using namespace std;

int getBookLevel();

int getSpellNumber();

string getSchool();

void generator(int bLevel, int spNum, string spSchool);

void glyphArrays();

/*int winTest(int argc, char** argv) 
{
	QApplication testQ(argc, argv);
	testClass testWindow(nullptr);
	testWindow.show();

	return testQ.exec();
}*/


effectGlyph abjuration[5];
effectGlyph conjuration[5];
effectGlyph destruction[5];
effectGlyph divination[5];
effectGlyph enchantment[5];
effectGlyph illusion[5];
effectGlyph necromancy[5];
effectGlyph transmutation[5];
spell spellList[30];

int main(void) {
	int bookLevel = 0;
	int spellNumber = 0;
	string schoolSelection = "None";
	int displayI = 0; //index for number of spells in list to display
	int effectNum = 0;

	glyphArrays();
	bookLevel = getBookLevel();
	spellNumber = getSpellNumber();
	schoolSelection = getSchool();
	generator(bookLevel, spellNumber, schoolSelection);

	for (displayI = 0; displayI < spellNumber; displayI++) {
		effectNum = spellList[displayI].effectNumber;
		spellList[displayI].displaySpell();
	}

	return(0);
}

int getBookLevel() {
	int level = 0;
	cout << "What level would you like the spellbook to be? (1-8)\n";
	cin >> level;
	return (level);
}

int getSpellNumber() {
	int spellNum = 0;
	cout << "\n" << "How many spells would you like to generate? (1-30)\n";
	cin >> spellNum;
	return (spellNum);
}

string getSchool() {
	string school = "None";
	bool validSchool = false;
	cout << "\n" << "What school would you like to focus on?\n";
	cin >> school;
	if (school == "None" || "Abjuration" || "Conjuration" || "Destruction" || "Divination" || "Enchantment" || "Illustion" || "Necromancy" || "Transmutation") {
		validSchool = true;
		return (school);
	}	

	else {
		while (validSchool == false) {
			cout << "\n" << "That was not a valid school!\n";
			cout << "Please enter a valid school: ";
			cin >> school;

			if (school == "None" || "Abjuration" || "Conjuration" || "Destruction" || "Divination" || "Enchantment" || "Illustion" || "Necromancy" || "Transmutation") {
				validSchool = true;
				return (school);
			}
		}
	}
}

void glyphArrays() {

	// Abjuration Glyph List
	effectGlyph abjA;
	abjA.effectMake("Abjuration", "Abj A \n");
	abjuration[0] = abjA;
	effectGlyph abjB;
	abjB.effectMake("Abjuration", "Abj B \n");
	abjuration[1] = abjB;
	effectGlyph abjC;
	abjC.effectMake("Abjuration", "Abj C \n");
	abjuration[2] = abjC;
	effectGlyph abjD;
	abjD.effectMake("Abjuration", "Abj D \n");
	abjuration[3] = abjD;
	effectGlyph abjE;
	abjE.effectMake("Abjuration", "Abj E \n");
	abjuration[4] = abjE;

	// Conjuration Glyph List
	effectGlyph conA;
	conA.effectMake("Conjuration", "Con A \n");
	conjuration[0] = conA;
	effectGlyph conB;
	conB.effectMake("Conjuration", "Con B \n");
	conjuration[1] = conB;
	effectGlyph conC;
	conC.effectMake("Conjuration", "Con C \n");
	conjuration[2] = conC;
	effectGlyph conD;
	conD.effectMake("Conjuration", "Con D \n");
	conjuration[3] = conD;
	effectGlyph conE;
	conE.effectMake("Conjuration", "Con E \n");
	conjuration[4] = conE;

	// Destruction Glyph List
	effectGlyph desA;
	desA.effectMake("Destruction", "Des A \n");
	destruction[0] = desA;
	effectGlyph desB;
	desB.effectMake("Destruction", "Des B \n");
	destruction[1] = desB;
	effectGlyph desC;
	desC.effectMake("Destruction", "Des C \n");
	destruction[2] = desC;
	effectGlyph desD;
	desD.effectMake("Destruction", "Des D \n");
	destruction[3] = desD;
	effectGlyph desE;
	desE.effectMake("Destruction", "Des E \n");
	destruction[4] = desE;

	// Divination Glyph List
	effectGlyph divA;
	divA.effectMake("Divination", "Div A \n");
	divination[0] = divA;
	effectGlyph divB;
	divB.effectMake("Divination", "Div B \n");
	divination[1] = divB;
	effectGlyph divC;
	divC.effectMake("Divination", "Div C \n");
	divination[2] = divC;
	effectGlyph divD;
	divD.effectMake("Divination", "Div D \n");
	divination[3] = divD;
	effectGlyph divE;
	divE.effectMake("Divination", "Div E \n");
	divination[4] = divE;

	// Enchantment Glyph List
	effectGlyph encA;
	encA.effectMake("Enchantment", "Enc A \n");
	enchantment[0] = encA;
	effectGlyph encB;
	encB.effectMake("Enchantment", "Enc B \n");
	enchantment[1] = encB;
	effectGlyph encC;
	encC.effectMake("Enchantment", "Enc C \n");
	enchantment[2] = encC;
	effectGlyph encD;
	encD.effectMake("Enchantment", "Enc D \n");
	enchantment[3] = encD;
	effectGlyph encE;
	encE.effectMake("Enchantment", "Enc E \n");
	enchantment[4] = encE;

	// Illusion Glyph List
	effectGlyph illA;
	illA.effectMake("Illusion", "Ill A \n");
	illusion[0] = illA;
	effectGlyph illB;
	illB.effectMake("Illusion", "Ill B \n");
	illusion[1] = illB;
	effectGlyph illC;
	illC.effectMake("Illusion", "Ill C \n");
	illusion[2] = illC;
	effectGlyph illD;
	illD.effectMake("Illusion", "Ill D \n");
	illusion[3] = illD;
	effectGlyph illE;
	illE.effectMake("Illusion", "Ill E \n");
	illusion[4] = illE;

	// Necromancy Glyph List
	effectGlyph necA;
	necA.effectMake("Necromancy", "Nec A \n");
	necromancy[0] = necA;
	effectGlyph necB;
	necB.effectMake("Necromancy", "Nec B \n");
	necromancy[1] = necB;
	effectGlyph necC;
	necC.effectMake("Necromancy", "Nec C \n");
	necromancy[2] = necC;
	effectGlyph necD;
	necD.effectMake("Necromancy", "Nec D \n");
	necromancy[3] = necD;
	effectGlyph necE;
	necE.effectMake("Necromancy", "Nec E \n");
	necromancy[4] = necE;

	// Transmutation Glyph List
	effectGlyph traA;
	traA.effectMake("Transmutation", "Tra A \n");
	transmutation[0] = traA;
	effectGlyph traB;
	traB.effectMake("Transmutation", "Tra B \n");
	transmutation[1] = traB;
	effectGlyph traC;
	traC.effectMake("Transmutation", "Tra C \n");
	transmutation[2] = traC;
	effectGlyph traD;
	traD.effectMake("Transmutation", "Tra D \n");
	transmutation[3] = traD;
	effectGlyph traE;
	traE.effectMake("Transmutation", "Tra E \n");
	transmutation[4] = traE;
}

void generator(int bLevel, int spNum, string spSchool) {
	int maxGlyph = (bLevel+2);
	int elemCount = 0;
	int shapeCount = 0;
	int i = 0;
	string schoolWeighted = spSchool;
	string schoolChoice = "None";
	int spNo = spNum;
	int effectCount = 0;

	srand((unsigned)time(0));

	for (i = 0; i < spNo; i++) {

		effectGlyph spellEffects[10];
		elemCount = 0;
		shapeCount = 0;
		effectCount = 0;
		string elem = "None";
		string shape = "None";
		bool hasShape = false;
		int schoolSelector = 0;
		int glyphSelector = 0;
		int shapeSelector = 0;
		int effectSelector = 0;
		int elemSelector = 0;
		int glyphCount = 0;
		int effectI = 0; //effect index

		// Chooses which school of effect glyphs to pull from in generator loop
		if (schoolWeighted == "None") {
			schoolSelector = (rand() % 8) + 1;
		}

		else {
			schoolSelector = (rand() % 11) + 1;
		}

		switch (schoolSelector) {
		case 1:
			schoolChoice = "Abjuration"; //Abjuration
			break;
		case 2:
			schoolChoice = "Conjuration"; //Conjuration
			break;
		case 3:
			schoolChoice = "Destruction"; //Destruction
			break;
		case 4:
			schoolChoice = "Divination"; //Divination
			break;
		case 5:
			schoolChoice = "Enchantment"; //Enchantment
			break;
		case 6:
			schoolChoice = "Illusion"; //Illusion
			break;
		case 7:
			schoolChoice = "Necromancy"; //Necromancy
			break;
		case 8:
			schoolChoice = "Transmutation"; //Transmutation
			break;
		case 9:
			schoolChoice = schoolWeighted;
			break;
		case 10:
			schoolChoice = schoolWeighted;
			break;
		case 11:
			schoolChoice = schoolWeighted;
			break;

		}

		// Chooses element for the spell and increases glyph counts accordingly
		elemSelector = (rand() % 7) + 1;

		switch (elemSelector) {
		case 1:
			elem = "None";
			break;
		case 2:
			elem = "Life";
			glyphCount++;
			elemCount++;
			break;
		case 3:
			elem = "Death";
			glyphCount++;
			elemCount++;
			break;
		case 4:
			elem = "Fire";
			glyphCount++;
			elemCount++;
			break;
		case 5:
			elem = "Water";
			glyphCount++;
			elemCount++;
			break;
		case 6:
			elem = "Earth";
			glyphCount++;
			elemCount++;
			break;
		case 7:
			elem = "Air";
			glyphCount++;
			elemCount++;
			break;
		}

		// Loop chooses new glyphs to add to spell as long as it hasn't reached max glyphs. 1/4 chance in each iteration of ending glyph selection early.
		while (glyphCount < maxGlyph) {

			glyphSelector = (rand() % 3) + 1;
			
			switch(glyphSelector) {

			// Picks a shape glyph. If there is no shape, selects shape and increases glyph and shape count. Otherwise just increases counts.
			case 1:
				if (hasShape == false) {
					shapeSelector = (rand() % 4) + 1;
					switch (shapeSelector) {
					case 1:
						shape = "Aura";
						hasShape = true;
						break;
					case 2:
						shape = "Barrier";
						hasShape = true;
						break;
					case 3:
						shape = "Projectile";
						hasShape = true;
						break;
					case 4:
						shape = "Zone";
						hasShape = true;
						break;
					}
				}
					shapeCount++;
					glyphCount++;

				break;

		    // Picks another element glyph, increases count if there is an element. Otherwise element remains at none.
			case 2:
				if (elem != "None") {
					elemCount++;
					glyphCount++;
				}
				break;

            // Picks an effect glyph from the array of effect glyphs for the chosen school
			case 3:
				effectSelector = (rand() % 5);
				if (schoolChoice == "Abjuration") {
					spellEffects[effectI] = abjuration[effectSelector];
				}
				else if (schoolChoice == "Conjuration") {
					spellEffects[effectI] = conjuration[effectSelector];
				}
				else if (schoolChoice == "Destruction") {
					spellEffects[effectI] = destruction[effectSelector];
				}
				else if (schoolChoice == "Divination") {
					spellEffects[effectI] = divination[effectSelector];
				}
				else if (schoolChoice == "Enchantment") {
					spellEffects[effectI] = enchantment[effectSelector];
				}
				else if (schoolChoice == "Illusion") {
					spellEffects[effectI] = illusion[effectSelector];
				}
				else if (schoolChoice == "Necromancy") {
					spellEffects[effectI] = necromancy[effectSelector];
				}
				else if (schoolChoice == "Transmutation") {
					spellEffects[effectI] = transmutation[effectSelector];
				}
				effectI++;
				effectCount++;
				glyphCount++;

				break;
			}

			// After each glyph selected, 1/4 chance to end the spell generation
			if ((rand() % 4) == 0) {
				glyphCount = maxGlyph;
			}

		}

		spellList[i].spellSchool = schoolChoice;
		spellList[i].shapeNumber = shapeCount;
		spellList[i].spellShape = shape;
		spellList[i].spellElem = elem;
		spellList[i].elemNumber = elemCount;
		spellList[i].effectNumber = effectCount;

		for (effectI = 0; effectI < effectCount; effectI++) {
			//cout << spellEffects[effectI].effectDesc << "\n";
			spellList[i].spellEffects[effectI] = spellEffects[effectI];
		}
	}

	return;
}

