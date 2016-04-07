#pragma once
#include "IEnumetateur.h"
#include "boite.h"

class IBoite
{
protected:
	int hauteur;
	int largeur;

	Boite b1;
	Boite b2;
public:
	IBoite();
	IBoite(Boite b1, Boite b2) : b1{ b1 }, b2{ b2 } 
	{ 
		// Pour l'instant
		if (b1.getText().size() > b2.getText().size())
		{
			largeur = b1.getText().size();
		}
		else
		{
			largeur = b2.getText().size();
		}

		// Pour l'instant
		hauteur = 2;
	};

	virtual string print() const;
};

ostream& operator << (ostream& os, IBoite boite)
{
	// Appeller la fonction print des enfants pour afficher custom
	os << boite.print();
	return os;
}