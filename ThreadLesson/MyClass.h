#pragma once
#include <iostream>
#include <thread>

class MyClass {
public:
	void DoWork() {
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));

		std::cout << "ID потока = "<< std::this_thread::get_id() << " ====\t" << "DoWork STARTED\t====" << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(5000));

		std::cout << "ID потока = " << std::this_thread::get_id() << " ====\t" << "DoWork STOPPED\t====" << std::endl;
	}

	void DoWork2(int a) {
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));

		std::cout << "ID потока = " << std::this_thread::get_id() << " ====\t" << "DoWork2 STARTED\t====" << std::endl;

		std::this_thread::sleep_for(std::chrono::milliseconds(5000));

		std::cout << "DoWork2 значение параметра: " << a << std::endl;

		std::cout << "ID потока = " << std::this_thread::get_id() << " ====\t" << "DoWork2 STOPPED\t====" << std::endl;
	}

	int Sum(int const& a, int const& b) {
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		std::cout << "ID потока = " << std::this_thread::get_id() << " ====\t" << "DoWork STARTED\t====" << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		std::cout << "ID потока = " << std::this_thread::get_id() << " ====\t" << "DoWork STOPPED\t====" << std::endl;
		return a + b;
	}
};