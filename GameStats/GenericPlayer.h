#pragma once
#include "Hand.h"

class GenericPlayer : public Hand {
	friend ostream& operator<<(ostream& os, GenericPlayer const& aGenericplayer);
public:
	GenericPlayer(string const& name = "");
	virtual ~GenericPlayer() override;
	virtual bool IsHitting() const = 0;
	bool IsBusted() const;
	void Bust() const;
protected:
	string m_Name;
};