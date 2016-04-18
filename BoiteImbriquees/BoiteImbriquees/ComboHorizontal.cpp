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

void ComboHorizontal::Delete()
{
	if (gauche != nullptr)
	{
		gauche->~Boite();
		delete gauche;
		gauche = nullptr;
	}
	if (droite != nullptr)
	{
		droite->~Boite();
		delete droite;
		droite = nullptr;
	}
}

string ComboHorizontal::getLine(int no, int largeurTotal)
{
	string textGauche = gauche->getLine(no, gauche->getLargeur());
	string textDroite = droite->getLine(no,droite->getLargeur());
	return textGauche + textDroite;
}