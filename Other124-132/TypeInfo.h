#pragma once
#include "TypeSize.h"

template <class T1>
class TypeInfo : public TypeSize<T1>{
public:
	TypeInfo(T1 value) : TypeSize<T1>(value) {}
	void ShowTypeName() {
		std::cout << "название типа: " << typeid(this->value).name() << std::endl;
	}
private:

};