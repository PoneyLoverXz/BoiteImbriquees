#include "IBoite.h"

IBoite::IBoite() {}

IBoite::~IBoite() {}

ostream& IBoite::print(ostream& os) const { return os; }

ostream& operator << (ostream& os, IBoite boite)
{
	// Appeller la fonction print des enfants pour afficher custom
	boite.print(os);
	return os;
}
