#pragma once
//1.1. Первое знакомство с шаблонами функций
template<typename T1>
T1 max(T1 a, T1 b) {
	return b < a ? a : b;
}

template<class Т>
Т max2(Т а, Т Ь) {
	return Ь < а ? а : Ь;
}

//1.2. Вывод аргумента шаблона
template<typename Т = int>
void f(Т a = 1) {
}

//1.3. Несколько параметров шаблона
template<typename T1, typename Т2>
T1 max3(T1 а, Т2 Ь) {
	return Ь < а ? а : Ь;
}

template<typename RT, typename Tl, typename T2 >
RT max4(Tl a, T2 b) {
	return b < a ? a : b;
}