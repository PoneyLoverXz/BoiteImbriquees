#pragma once
#include "IBoite.h"
#include "boite.h"

class ComboHorizontal : public IBoite
{
	Boite * gauche = nullptr;
	Boite * droite = nullptr;
public:
	ComboHorizontal();
	ComboHorizontal(Boite b1, Boite b2);

	void Delete();

	string getLine(int no, int largeurTotal);
};