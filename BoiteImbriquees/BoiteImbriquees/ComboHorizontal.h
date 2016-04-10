#pragma once
#include "IBoite.h"
#include "boite.h"

class ComboHorizontal : public IBoite
{
	Boite gauche;
	Boite droite;
public:
	ComboHorizontal() {}
	ComboHorizontal(Boite b1, Boite b2) : gauche(b1), droite(b2) {}

	virtual ostream& print(ostream& os) const
	{
		os << gauche << " | " << droite << endl;
		return os;
	}
};