#include "Cadre.h"
#include "boite.h"
#include <string>
using namespace std;
Cadre::Cadre()
{

}

Cadre::Cadre(Boite b, ostream& os)
{
	os << "+" << string(b.getLargeur(), '-') << "+" << endl;
	b.print(os);
	os << "+" << string(b.getLargeur(), '-') << "+" << endl;
}