#include <iostream>
#include "PC.h"

using namespace std;

/*
    namespace
    пространство имён
*/

namespace firstNS {
    void Foo() {
        cout << "Foo firstNS" << endl;
    }
    class Point {};
}
namespace secondNS {
    void Foo() {
        cout << "Foo secondNS" << endl;
    }
    int a = 0;
    class Point {};
}

namespace thirdNS {
    namespace secondNS {
        void Foo() {
            cout << "Foo third secondNS" << endl;
        }
    }
}

int Namespace()
{
    setlocale(LC_ALL, "RU");
    firstNS::Foo();
    firstNS::Point p;

    secondNS::Foo();
    secondNS::a = 2;
    secondNS::Point p2;

    thirdNS::secondNS::Foo();
    return 0;
}
