#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
*	���������� ���������� �������� (STL)
*	map (�������� ������, ������ ���� ��������) ������ ����������
*	multimap ����� ������� ������������� ��������
*/

template <typename T1, typename T2>
void PrintMap(map<T1, T2> m) {
	for (pair<T1, T2> const& p : m)
	{
		cout << p.first << "\t" << p.second << endl;
	}
}

int Map()
{
	setlocale(LC_ALL, "RU");
	//pair<key, value>
	pair<int, string> p(1, "�������");
	cout << "p.first = " << p.first << endl;
	cout << "p.second = " << p.second << endl;

	map<int, string> myMap; //���� ������ ����������, ������� ����� ���� ����������

	myMap.insert(p);
	myMap.insert(make_pair(5, "laptoop"));
	myMap.insert(pair<int, string>(3, "PC")); //������ � �������� � map
	myMap.emplace(4, "Smartphone");
	myMap.emplace(33, "Hard disk");
	auto res = myMap.emplace(33, "SSD disk"); //�� ������� ��������, ��� ��������� �������
	cout << "res.first->first = " << res.first->first << endl;
	cout << "res.second->second = " << res.first->second << endl;
	cout << "res.second = " << res.second << endl; //���������� false (0) ���� �� ������� �������� ����� true (1)
	PrintMap(myMap);

	auto it = myMap.find(33); //���� ���������� end �� �� �� ����� ����
	if (it != myMap.end()) {
		cout << "it->first = " << it->first << endl;
		cout << "it->second = " << it->second << endl;
	}
	else {
		cout << "Element not found!" << endl;
	}

	cout << "myMap[3] = " << myMap[3] << endl;

	map<string, int> mapMoney;
	mapMoney.emplace("Alex", 13000);
	mapMoney.emplace("Max", 33000);
	mapMoney.emplace("Jonh", 21000);
	mapMoney["Max"] = 35000;
	mapMoney["Poul"] = 15000; //��������� ���� ��� ��� � map
	mapMoney["Poul"] = 55000; //�������� �������� �����
	cout << "mapMoney['Max'] = " << mapMoney["Max"] << endl;
	PrintMap(mapMoney);

	try
	{
		mapMoney.at("Tor") = 1230; //���� ��� ��� � map, �� ����� ������� �� ����������, � ��������� ����������
	}
	catch (const std::exception& ex)
	{
		cout << endl;
		cout << ex.what() << endl;
		cout << "���� ���������� � ���������� map" << endl;
		cout << endl;
	}

	auto getVal = mapMoney.erase("Max"); //��������� ���� ��� ��������
	cout << "erase('Max') = " << getVal << endl; //����� 1 ���� ���������� �������, ����� 0
	getVal = mapMoney.erase("R");
	cout << "erase('R') = " << getVal << endl;
	PrintMap(mapMoney);


	return 0;
}
