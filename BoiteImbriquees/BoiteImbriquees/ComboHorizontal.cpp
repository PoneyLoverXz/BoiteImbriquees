//#include "boite.h"
#include "ComboHorizontal.h"

ComboHorizontal::ComboHorizontal()
{

}

ComboHorizontal::ComboHorizontal(Boite b1, Boite b2)
{
	gauche = new Boite(b1);
	droite = new Boite(b2);
	largeur = gauche->getLargeur() + droite->getLargeur();
	hauteur = gauche->getHauteur() > droite->getHauteur() ? gauche->getHauteur() : droite->getHauteur();
}

ComboHorizontal::~ComboHorizontal()
{
	//if (gauche != nullptr)
	//	delete gauche;
	//if (droite != nullptr)
	//	delete droite;
}

ostream& ComboHorizontal::print(ostream& os) const
{
	gauche->print(os) << " | ";
	droite->print(os);
	return os;
}
