#include "Mono.h"
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

Mono::Mono() {}

Mono::Mono(string s)
{
	vector<string> v;
	int index = s.find('\n');
	int Largeur = 0;
	while (index != string::npos)
	{
		string newString = s.substr(0, index);
		if (newString.length() > Largeur)
			Largeur = newString.length();
		v.push_back(newString);
		s = s.substr(index + 1);
		index = s.find('\n');
	}
	v.push_back(s);
	if (s.length() > Largeur)
		Largeur = s.length();
	text = v;
	hauteur = v.size();
	largeur = Largeur;
}

Mono::Mono(string s, int no)
{
	vector<string> v;
	int index = s.find('\n');
	int Largeur = 0;
	while (index != string::npos)
	{
		string newString = s.substr(0, index);
		if (newString.length() > Largeur)
			Largeur = newString.length();
		v.push_back(newString);
		s = s.substr(index + 1);
		index = s.find('\n');
	}
	v.push_back(s);
	if (s.length() > Largeur)
		Largeur = s.length();
	text = v;
	hauteur = v.size();
	largeur = Largeur;

	noLigne = no;
}

Mono::~Mono() {}

string Mono::getLine(int no, int largeurTotal)
{
	if (no < hauteur)
	{
		return text[no] + string(largeurTotal - text[no].length(), ' ') + "|";
	}
	else
	{
		return string(largeur, ' ');
	}
}