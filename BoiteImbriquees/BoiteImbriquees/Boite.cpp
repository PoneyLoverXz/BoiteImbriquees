#include "boite.h"
#include "Mono.h"
#include "ComboHorizontal.h"
#include "ComboVertical.h"
#include "IBoite.h"
#include <string>
Boite::Boite() 
{
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

Boite::~Boite()
{
	/*if (m_iboite != nullptr)
	{
	delete m_iboite;
	m_iboite = nullptr;
	}*/
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
	if (m_iboite)
		m_iboite->print(os);

	return os;
}

