#include <iostream>
#include <string>

using namespace std;

void getLenght(char const* const str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    cout << count << endl;

}

int String()
{
    setlocale(LC_ALL, "RU");
    string str1 = "Hello";
    string str2 = "World";
    string str3 = "!";
    string result;

    result = str1 + " " + str2 + str3;

    cout << result << endl;

    return 0;
}