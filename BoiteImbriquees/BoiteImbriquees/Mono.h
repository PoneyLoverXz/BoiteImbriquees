#pragma once
#include "IBoite.h"


class Mono : public IBoite
{
	string text;
public:
	Mono();

	Mono(string text);

	~Mono();

	virtual ostream& print(ostream& os) const;
};