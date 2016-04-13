#include "Mono.h"
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

Mono::Mono() {}

Mono::Mono(string s) : text(s) 
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
	hauteur = v.size();
	largeur = Largeur;
}

Mono::~Mono() {}

ostream& Mono::print(ostream& os) const
{
	os << text << endl;
	return os;
}