#pragma once
class MyException : public std::exception {
public:
	MyException(char const* msg, int dataState) :exception(msg) {
		this->dataState = dataState;
	}
	int GetDataState() { return dataState; }
private:
	int dataState;
};