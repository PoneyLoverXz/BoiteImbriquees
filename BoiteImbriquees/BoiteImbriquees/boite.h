#pragma once
#include <string>
#include <iostream>
#include "Mono.h"
using namespace std;

class Boite
{
	IBoite iboite;
public:
	Boite() {}
	Boite(string text) 
	{
		iboite = IBoite<Mono>{text};
	}

	ostream& print(ostream& os) const
	{
		return iboite.print(os);
	}
};

ostream& operator << (ostream& os, const Boite& boite)
{
	return boite.print(os);

	//// Affichage par défaut des boite (à refaire)
	//string text = boite.getText();
	//int size = text.size();

	//os << "+" << string(size, '-') << "+" << endl;
	//if(size > 0)
	//	os << '|' << text << '|' << endl;
	//os << "+" << string(size, '-') << "+" << endl;
	//
	//return os;
}
