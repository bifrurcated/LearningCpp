#pragma once
#include <iostream>

class EvenFunctor {
public:

	void operator()(int value) {
		if (value % 2 == 0) {
			evenSum += value;
			evenCount++;
		}
	}

	void ShowEvenSum() {
		std::cout << "����� ������ ����� = " << evenSum << std::endl;
	}
	void ShowEvenCount() {
		std::cout << "���������� ������ ����� = " << evenCount << std::endl;
	}
private:
	int evenSum = 0;
	int evenCount = 0;
};