#include <iostream>
#include "GraphicCard.h"
#include "OrcWarrior.h"

using namespace std;


/*
    Ромбовидное наследование
    Виртуальное наследование
*/

int main()
{
    setlocale(LC_ALL, "RU");
    
    GraphicCard gc("AMD", "NVidia");
    //Тут данные должны задваиваться
    cout << gc.GPU::companyName << endl;
    cout << gc.Memory::companyName << endl;

    cout << endl;

    OrcWarrior orc;
    //Поле HP должно быть одно для OrcWarrior!
    //Для этого добавляем в наследование модификатор virtual у Orc и Warrior
    cout << orc.Orc::HP << endl;
    cout << orc.Warrior::HP << endl;
    orc.Orc::HP = 10;
    cout << orc.Orc::HP << endl;
    cout << orc.Warrior::HP << endl;
    return 0;
}
