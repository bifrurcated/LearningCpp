#pragma once
#include "GenericPlayer.h"

class House : public GenericPlayer{
public:
	House(string const& name = "House");
	virtual ~House() override;
	virtual bool IsHitting() const override;
	void FlipFirstCard();
};