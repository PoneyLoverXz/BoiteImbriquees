#pragma once
#include <istream>
#include <vector>
using namespace std;
class IBoite
{
protected:
	int hauteur = 0;
	int largeur = 0;
public:
	IBoite();
	void Delete();

	int getHauteur();
	int getLargeur();

	void setHauteur(int Hauteur);
	void setLargeur(int Largeur);
	virtual string getLine(int no, int largeurTotal);
};

