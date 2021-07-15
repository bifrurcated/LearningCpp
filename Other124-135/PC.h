#pragma once

class PC {
public:
	enum PCState {
		OFF,
		ON,
		SLEEP
	};
	PCState GetState() { return State; }
	void SetState(PCState State) { this->State = State; }
private:
	PCState State;
};