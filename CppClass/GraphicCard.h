#pragma once
#include "GPU.h"
#include "Memory.h"

class GraphicCard :public GPU, public Memory {
public:
	GraphicCard(std::string gpuCompanyName, std::string memoryCompanyName)
		: GPU(gpuCompanyName), Memory(memoryCompanyName) {
		std::cout << "Конструктор GraphicCard" << std::endl;
	}
};