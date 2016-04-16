//#include "boite.h"
#include "ComboHorizontal.h"

ComboHorizontal::ComboHorizontal()
{

}

ComboHorizontal::ComboHorizontal(Boite b1, Boite b2)
{
	gauche = new Boite(b1);
	droite = new Boite(b2);
	largeur = gauche->getLargeur() + droite->getLargeur() + 1; //1 étant la séparation entre les Boites.
	hauteur = gauche->getHauteur() > droite->getHauteur() ? gauche->getHauteur() : droite->getHauteur();
}

ComboHorizontal::~ComboHorizontal()
{
	//if (gauche != nullptr)
	//	delete gauche;
	//if (droite != nullptr)
	//	delete droite;
}

string ComboHorizontal::getLine(int no)
{
	string textGauche = gauche->getLine(no);
	string textDroite = droite->getLine(no);
	return textGauche + textDroite;
}