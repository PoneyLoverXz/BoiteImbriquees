#include "IBoite.h"

IBoite::IBoite() {}

void IBoite::Delete()
{

}

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

string IBoite::getLine(int no, int largeurTotal)
{
	return "";
}