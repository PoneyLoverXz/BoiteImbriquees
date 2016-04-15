#pragma once
#include "IBoite.h"
#include "boite.h"

class ComboVertical : public IBoite
{
	Boite * haut = nullptr;
	Boite * bas = nullptr;
public:
	ComboVertical();
	ComboVertical(Boite b1, Boite b2);
	~ComboVertical();
	string getLine(int no, int largeurTotal);
};