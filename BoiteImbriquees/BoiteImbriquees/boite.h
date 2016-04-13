#pragma once
#include "IBoite.h"
#include "Mono.h"

class ComboVertical;
class ComboHorizontal;
class Mono;
class Boite
{
	IBoite * m_iboite = nullptr;
public:
	Boite();
	Boite(string text);

	Boite(ComboVertical cv);

	Boite(ComboHorizontal ch);

	Boite(Mono mono);

	int getLargeur() const;
	int getHauteur() const;

	~Boite();

	ostream& print(ostream& os) const;
};

