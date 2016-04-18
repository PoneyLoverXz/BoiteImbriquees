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


void ComboVertical::Delete()
{
	if (haut != nullptr)
	{
		haut->Delete();
		delete haut;
		haut = nullptr;
	}
	if (bas != nullptr)
	{
		bas->Delete();
		delete bas;
		bas = nullptr;
	}
}

string ComboVertical::getLine(int no, int largeurTotal)
{
	string text = "";

	if (no < haut->getHauteur())
	{
		 text = haut->getLine(no, largeurTotal);
	}
	else
	{
		if (no == haut->getHauteur())
			return string(largeurTotal, '-') + "|";
		no -= haut->getHauteur() + 1;

		text = bas->getLine(no, largeurTotal);
	}

	return text;
}