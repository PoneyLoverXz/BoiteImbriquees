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

string IBoite::getLine(int no)
{
	return "";
}