#include "Card.h"

Card::Card(rank r, suit s, bool ifu) : 
	m_Rank(r) , m_Suit(s), m_IsFaceUp(ifu)
{
}

int Card::GetValue() const
{
	//Если карта перевёрнута лицом вниз, её значение равно 0
	int value = 0;
	if (m_IsFaceUp)
	{
		value = m_Rank;
		if (value > 10) 
		{
			value = 10;
		}
	}
	return value;
}

void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);
}
