#pragma once
#include "IEnumerateur.h"
#include <iostream>
using namespace std;

struct IBoite
{
protected:
	int hauteur;
	int largeur;

public:
	IBoite(){}

	virtual ostream& print(ostream& os) const {};
};

ostream& operator << (ostream& os, IBoite boite)
{
	// Appeller la fonction print des enfants pour afficher custom
	boite.print(os);
	return os;
}