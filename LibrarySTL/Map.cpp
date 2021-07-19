#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
*	Библиотека стандарных шаблонов (STL)
*	map (бинарное дерево, хранит пары значений) только уникальные
*	multimap может хранить повторяющиеся значения
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
	pair<int, string> p(1, "Телефон");
	cout << "p.first = " << p.first << endl;
	cout << "p.second = " << p.second << endl;

	map<int, string> myMap; //ключ всегда уникальный, значени может быть одинаковым

	myMap.insert(p);
	myMap.insert(make_pair(5, "laptoop"));
	myMap.insert(pair<int, string>(3, "PC")); //создаёт и копирует в map
	myMap.emplace(4, "Smartphone");
	myMap.emplace(33, "Hard disk");
	auto res = myMap.emplace(33, "SSD disk"); //Не заменит значение, оно останется прежним
	cout << "res.first->first = " << res.first->first << endl;
	cout << "res.second->second = " << res.first->second << endl;
	cout << "res.second = " << res.second << endl; //возвращает false (0) если не удалось добавить иначе true (1)
	PrintMap(myMap);

	auto it = myMap.find(33); //если возвращает end то он не нашёл ключ
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
	mapMoney["Poul"] = 15000; //Создаться если его нет в map
	mapMoney["Poul"] = 55000; //Поменяет значения ключа
	cout << "mapMoney['Max'] = " << mapMoney["Max"] << endl;
	PrintMap(mapMoney);

	try
	{
		mapMoney.at("Tor") = 1230; //Если его нет в map, то новый элемент не добавиться, а выбросить исключение
	}
	catch (const std::exception& ex)
	{
		cout << endl;
		cout << ex.what() << endl;
		cout << "Ключ отсутвтует в контейнере map" << endl;
		cout << endl;
	}

	auto getVal = mapMoney.erase("Max"); //Указываем ключ для удаления
	cout << "erase('Max') = " << getVal << endl; //Вернёт 1 если получилось удалить, иначе 0
	getVal = mapMoney.erase("R");
	cout << "erase('R') = " << getVal << endl;
	PrintMap(mapMoney);


	return 0;
}
