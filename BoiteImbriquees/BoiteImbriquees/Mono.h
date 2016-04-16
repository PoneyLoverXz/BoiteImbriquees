#pragma once
#include "IBoite.h"
#include <vector>

class Mono : public IBoite
{
	std::vector<string> text;
	int noLigne;
public:
	Mono();

	Mono(string text);

	Mono(string text, int no);

	~Mono();

	string getLine(int no);
};