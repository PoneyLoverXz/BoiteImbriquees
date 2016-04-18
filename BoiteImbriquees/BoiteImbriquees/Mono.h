#pragma once
#include "IBoite.h"
#include <vector>

class Mono : public IBoite
{
	std::vector<string> text;
public:
	Mono();

	Mono(string text);

	string getLine(int no, int largeurTotal);

};