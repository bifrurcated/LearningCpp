#include "Game.h"

Game::Game(vector<string> const& names)
{
	for (auto const& pName : names)
	{
		m_Player.push_back(Player(pName));
	}
	srand(static_cast<size_t>(time(0)));
	m_Deck.Populate();
	m_Deck.Shuffle();
}

Game::~Game()
{
}

void Game::Play()
{
	for (int i = 0; i < 2; i++)
	{
		for (auto& pPlayer : m_Player)
		{
			m_Deck.Deal(pPlayer);
		}
		m_Deck.Deal(m_House);
	}

	m_House.FlipFirstCard();
	for (auto& pPlayer : m_Player)
	{
		cout << pPlayer << endl;
	}
	cout << m_House << endl;

	for (auto& pPlayer : m_Player)
	{
		m_Deck.AdditionalCards(pPlayer);
	}

	m_House.FlipFirstCard();
	cout << endl << m_House;

	m_Deck.AdditionalCards(m_House);
	if (m_House.IsBusted())
	{
		for (auto& pPlayer : m_Player)
		{
			if (!(pPlayer.IsBusted())) {
				pPlayer.Win();
			}
		}
	}
	else
	{
		for (auto& pPlayer : m_Player)
		{
			if (!(pPlayer.IsBusted()))
			{
				if (pPlayer.GetTotal() > m_House.GetTotal())
				{
					pPlayer.Win();
				}
				else if (pPlayer.GetTotal() < m_House.GetTotal())
				{
					pPlayer.Lose();
				}
				else 
				{
					pPlayer.Push();
				}
			}
		}

		for (auto& pPlayer : m_Player)
		{
			pPlayer.Clear();
		}
		m_House.Clear();
	}
}
