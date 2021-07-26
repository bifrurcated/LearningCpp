#pragma once
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game {
public:
	Game(vector<string> const& names);
	~Game();
	void Play();
private:
	Deck m_Deck;
	House m_House;
	std::vector<Player> m_Player;
};