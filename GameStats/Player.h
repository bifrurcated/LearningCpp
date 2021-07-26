#pragma once
#include "GenericPlayer.h"

class Player : public GenericPlayer{
public:
	Player(string const& name = "");
	virtual ~Player() override;
	virtual bool IsHitting() const override;
	void Win() const;
	void Lose() const;
	void Push() const;
};