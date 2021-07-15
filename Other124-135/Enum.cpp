#include <iostream>
#include "PC.h"

using namespace std;

/*
    ENUM
*/
enum Speed {
    MIN = 150,
    RECOMMEND = 600,
    MAX = 800
};

int Enum()
{
    setlocale(LC_ALL, "RU");
    PC pc;
    pc.SetState(PC::PCState::SLEEP);

    switch (pc.GetState())
    {
    case PC::PCState::OFF:
        cout << "ПК выключен!" << endl;
        break;
    case PC::PCState::ON:
        cout << "ПК включён!" << endl;
        break;
    case PC::PCState::SLEEP:
        cout << "ПК в спящем режиме!" << endl;
        break;
    default:
        break;
    }


    Speed sp = Speed::MAX;
    cout << sp << endl;

    return 0;
}
