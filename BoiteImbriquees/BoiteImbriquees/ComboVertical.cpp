#include "ComboVertical.h"
#include <string>
ComboVertical::ComboVertical() 
{

}

ComboVertical::ComboVertical(Boite b1, Boite b2)
{
	haut = new Boite(b1);
	bas = new Boite(b2);
	largeur = haut->getLargeur() > bas->getLargeur() ? haut->getLargeur() : bas->getLargeur();
	hauteur = haut->getHauteur() + bas->getHauteur();
}

ComboVertical::~ComboVertical()
{
	//if (haut != nullptr)
	//	delete haut;
	//if (bas != nullptr)
	//	delete bas;
}

ostream& ComboVertical::print(ostream& os) const
{
	haut->print(os) << string(largeur, '-') << endl;
	bas->print(os);
	return os;
}