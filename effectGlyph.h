#pragma once
#include <iostream>
using namespace std;

class effectGlyph
{

public:
	void effectMake(string s, string d) {
		effectSchool = s;
		effectDesc = d;
	}

	void glyphArrays();

	string effectDesc = "Empty";
	string effectSchool = "Evocation";


private:

};
