#include <iostream>
#include "effectGlyph.h"

void effectGlyph::glyphArrays() {

	effectGlyph abjuration[5];
	effectGlyph conjuration[5];
	effectGlyph destruction[5];
	effectGlyph divination[5];
	effectGlyph enchantment[5];
	effectGlyph illusion[5];
	effectGlyph necromancy[5];
	effectGlyph transmutation[5];

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