#include "boite.h"
#include "Mono.h"
#include "ComboHorizontal.h"
#include "ComboVertical.h"
#include "IBoite.h"
#include <string>
Boite::Boite() 
{
	m_iboite = new Mono();
}

Boite::Boite(string text)
{
	m_iboite = new Mono{ text };
}

Boite::Boite(ComboVertical cv)
{
	m_iboite = new ComboVertical(cv);
}

Boite::Boite(ComboHorizontal ch)
{
	m_iboite = new ComboHorizontal(ch);
}

Boite::Boite(Mono mono)
{
	m_iboite = new Mono(mono);
}

void Boite::Delete()
{
	if (m_iboite != nullptr)
	{
		m_iboite->Delete();
		delete m_iboite;
		m_iboite = nullptr;
	}
}

int Boite::getLargeur() const
{
	return m_iboite->getLargeur();
}
int Boite::getHauteur() const
{
	return m_iboite->getHauteur();
}

ostream& Boite::print(ostream& os) const
{
	os << "+" << string(getLargeur(), '-') << "+" << endl;
	for (int i = 0; i < getHauteur(); ++i)
	{
		string line = m_iboite->getLine(i, getLargeur());
		
		os << "|" << line << endl;
	}
	os << "+" << string(getLargeur(), '-') << "+" << endl;

	return os;
}

string Boite::getLine(int no, int largeurTotal)
{
	return m_iboite->getLine(no, largeurTotal);
}

