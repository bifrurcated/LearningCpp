#include <iostream>
#include <string>
using namespace std;

//  тип указателя (*имя указателя)(спецификация параметров);
//  int (*fooPointer)(int a); // указатель на функцию


string GetDataFromDB()
{
    return "Data from DB";
}

string GetDataFromWebService() {
    return "Data from Web Service";
}

string GetDataFromAstral() {
    return "Data From Astral";
}

void ShowInfo(string(*dataFrom)())
{
    cout << dataFrom() << endl;
}

int UkazFunction()
{
    setlocale(LC_ALL, "RU");

    ShowInfo(GetDataFromAstral);

    return 0;
}