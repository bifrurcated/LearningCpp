#pragma once
//1.1. ������ ���������� � ��������� �������
template<typename T1>
T1 max(T1 a, T1 b) {
	return b < a ? a : b;
}

template<class �>
� max2(� �, � �) {
	return � < � ? � : �;
}

//1.2. ����� ��������� �������
template<typename � = int>
void f(� a = 1) {
}

//1.3. ��������� ���������� �������
template<typename T1, typename �2>
T1 max3(T1 �, �2 �) {
	return � < � ? � : �;
}

template<typename RT, typename Tl, typename T2 >
RT max4(Tl a, T2 b) {
	return b < a ? a : b;
}