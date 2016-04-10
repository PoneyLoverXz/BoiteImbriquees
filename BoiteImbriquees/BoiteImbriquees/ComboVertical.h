#pragma once
#include "IBoite.h"
#include "boite.h"

class ComboVertical : public IBoite
{
	Boite haut;
	Boite bas;
public:
	ComboVertical() {}
	ComboVertical(Boite b1, Boite b2) : haut(b1), bas(b2) {}

	virtual ostream& print(ostream& os) const
	{
		os << haut << endl << "-----------" << bas << endl;
		return os;
	}
};