#include "boite.h"
#include "ComboVertical.h"

int main()
{
	Boite b{ "Salut les \n amis" };
	Boite c{ "wellup" };
	cout << b << endl;
	cout << c << endl;

	ComboVertical cv { b, c };
	//cout << cv << endl;
}