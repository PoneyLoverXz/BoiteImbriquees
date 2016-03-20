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
	string text = boite.getText();
	int size = text.size();

	os << "+" << string(size, '-') << "+" << endl;
	os << '|' << text << '|' << endl;
	os << "+" << string(size, '-') << "+" << endl;
	
	return os;
}
