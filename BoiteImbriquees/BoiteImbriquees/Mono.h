#pragma once
#include "IBoite.h"

class Mono : IBoite
{
	string text;
public:
	virtual string print()
	{
		// Pour l'instant
		string text = b1.getText();
		text += "\n";
		text += b2.getText();
		return text;
	}
};