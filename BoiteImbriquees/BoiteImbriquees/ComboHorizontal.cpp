//#include "boite.h"
#include "ComboHorizontal.h"

ComboHorizontal::ComboHorizontal()
{

}

ComboHorizontal::ComboHorizontal(Boite b1, Boite b2)
{
	gauche = new Boite(b1);
	droite = new Boite(b2);
}

ComboHorizontal::~ComboHorizontal()
{
	//if (gauche != nullptr)
	//	delete gauche;
	//if (droite != nullptr)
	//	delete droite;
}

ostream& ComboHorizontal::print(ostream& os) const
{
	gauche->print(os) << endl << "-----------" << endl;
	droite->print(os);
	return os;
}
