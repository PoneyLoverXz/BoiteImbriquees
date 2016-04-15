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
	hauteur = haut->getHauteur() + bas->getHauteur() + 1; //1 étant la séparation entre les Boites
}

ComboVertical::~ComboVertical()
{
	//if (haut != nullptr)
	//	delete haut;
	//if (bas != nullptr)
	//	delete bas;
}

string ComboVertical::getLine(int no, int largeurTotal)
{
	if (no < haut->getHauteur())
	{
		return haut->getLine(no, largeurTotal - haut->getLargeur());
	}
	else
	{
		if (no == haut->getHauteur())
			return string(largeurTotal, '-') + "|";
		no -= haut->getHauteur() + 1;

		string text = bas->getLine(no, largeurTotal - haut->getLargeur());
		return text + string(largeurTotal - text.size(), ' ') + "|";
	}
}