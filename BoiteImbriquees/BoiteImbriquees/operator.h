#pragma once

#include "boite.h"
#include <iostream>
using namespace std;

ostream& operator << (ostream& os, const Boite& boite)
{
	boite.print(os);
	return os;
}