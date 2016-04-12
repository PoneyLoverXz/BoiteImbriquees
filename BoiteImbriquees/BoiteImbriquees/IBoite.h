#pragma once
#include <istream>
using namespace std;
class IBoite
{
protected:
	int hauteur = 0;
	int largeur = 0;

public:
	IBoite();
	~IBoite();
	virtual ostream& print(ostream& os) const;
	
};

