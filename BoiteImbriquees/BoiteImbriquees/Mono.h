#pragma once
#include "IBoite.h"
#include <vector>

class Mono : public IBoite
{
	std::vector<string> text;
public:
	Mono();

	Mono(string text);

	~Mono();



	virtual ostream& print(ostream& os) const;
};