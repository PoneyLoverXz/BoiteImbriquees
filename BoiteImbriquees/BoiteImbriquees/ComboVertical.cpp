#include "ComboVertical.h"

ComboVertical::ComboVertical() 
{

}

ComboVertical::ComboVertical(Boite b1, Boite b2)
{
	haut = new Boite(b1);
	bas = new Boite(b2);
}

ComboVertical::~ComboVertical()
{
	//if (haut != nullptr)
	//	delete haut;
	//if (bas != nullptr)
	//	delete bas;
}

ostream& ComboVertical::print(ostream& os) const
{
	haut->print(os) << endl << "-----------" << endl;
	bas->print(os);
	return os;
}