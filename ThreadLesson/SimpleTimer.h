#pragma once
#include <chrono>
#include <iostream>
#include <string>

class SimpleTimer {
public:
	SimpleTimer(std::string name_timer) {
		this->name_timer = name_timer;
		start = std::chrono::high_resolution_clock::now();
	}
	~SimpleTimer() {
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		std::cout << "DURATION " << name_timer << " = " << duration.count() << " sec." << std::endl;
	}
private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::string name_timer;
};