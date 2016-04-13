#include "IBoite.h"

IBoite::IBoite() {}

IBoite::~IBoite() {}

int IBoite::getHauteur()
{
	return hauteur;
}

int IBoite::getLargeur()
{
	return largeur;
}

void IBoite::setHauteur(int Hauteur)
{
	hauteur = Hauteur;
}

void IBoite::setLargeur(int Largeur)
{
	largeur = Largeur;
}

ostream& IBoite::print(ostream& os) const { return os; }

ostream& operator << (ostream& os, IBoite boite)
{
	// Appeller la fonction print des enfants pour afficher custom
	boite.print(os);
	return os;
}
