#include "boite.h"
#include "ComboHorizontal.h"
#include "ComboVertical.h"
#include <iostream>
#include <string>
using namespace std;

ostream& operator << (ostream& os, const Boite& boite)
{
	boite.print(os);
	return os;
}

int main()
{
	Boite b;
	cout << b << endl;
	string texte = R"(Man! Hey!!!
ceci est un test
multiligne)";
	string aut_texte = "Ceci\nitou, genre";
	Boite b0{ texte };
	Boite b1{ aut_texte };
	cout << b0 << endl << b1 << endl;
	ComboVertical cv{ b0, b1 };
	cout << Boite{ cv } << endl;
	ComboHorizontal ch{ b0, b1 };
	cout << Boite{ ch } << endl;
	ComboVertical cvplus{ Boite{ cv }, Boite{ ch } };
	cout << Boite{ cvplus } << endl;
	ComboHorizontal chplus{ Boite{ cv }, Boite{ ch } };
	cout << Boite{ chplus } << endl;
	ComboVertical cvv{ Boite{ chplus }, Boite{ "coucou" } };
	cout << Boite{ cvv } << endl;
	cout << Boite{
		ComboHorizontal{
		Boite{ "a\nb\nc\nd\ne" },
		Boite{
		ComboVertical{
		Boite{ "allo" }, Boite{ "yo" }
	}
	}
	}
	} << endl;
	cout << Boite{
		ComboHorizontal{ Boite{ "Yo" }, Boite{} }
	} << endl;
	cout << Boite{
		ComboHorizontal{ Boite{}, Boite{ "Ya" } }
	} << endl;
	cout << Boite{
		ComboHorizontal{ Boite{}, Boite{} }
	} << endl;
	cout << Boite{
		ComboVertical{ Boite{}, Boite{} }
	} << endl;
	cout << Boite{
		ComboVertical{ Boite{ "Yip" }, Boite{} }
	} << endl;
	cout << Boite{
		ComboVertical{ Boite{}, Boite{ "Yap" } }
	} << endl;
}

