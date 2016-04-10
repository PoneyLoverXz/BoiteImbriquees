#pragma once
#include <string>
#include <iostream>
using namespace std;

class Boite
{
	string text;

public:
	Boite(string text) : text {text} {}
	string getText() { return text; }
};

ostream& operator << (ostream& os, Boite boite)
{
	// Affichage par défaut des boite (à refaire)
	string text = boite.getText();
	int size = text.size();

	os << "+" << string(size, '-') << "+" << endl;
	if(size > 0)
		os << '|' << text << '|' << endl;
	os << "+" << string(size, '-') << "+" << endl;
	
	return os;
}
