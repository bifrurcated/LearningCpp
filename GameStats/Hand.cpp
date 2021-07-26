#include "Hand.h"

Hand::Hand()
{
	m_Cards.reserve(7);
}

Hand::~Hand()
{
	Clear();
}

void Hand::Add(Card* pCard)
{
	m_Cards.push_back(pCard);
}

void Hand::Clear()
{
	for (auto& el : m_Cards)
	{
		delete el;
		el = 0;
	}
	m_Cards.clear();
}

int Hand::GetTotal() const
{
	if (m_Cards.empty())
	{
		return 0;
	}

	if (m_Cards[0]->GetValue() == 0)
	{
		return 0;
	}

	int total = 0;
	for (auto const& iter : m_Cards)
	{
		total += iter->GetValue();
	}

	bool containsAce = false;
	for (auto& iter : m_Cards)
	{
		if (iter->GetValue() == Card::ACE)
		{
			containsAce = true;
		}
	}
	if ( containsAce && (total <= 11) )
	{
		total += 10;
	}
	return total;
}
