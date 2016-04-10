#pragma once
#include "IBoite.h"

class Mono : public IBoite
{
	string text;
public:
	Mono(){}

	Mono(string text) : text(text){}

	virtual ostream& print(ostream& os) const
	{
		os << text << endl;
		return os;
	}
};