#include <iostream>
#include "Gun.h"
#include "SubmachineGun.h"
#include "Player.h"
#include "Bazooka.h"
#include "Knife.h"

using namespace std;

/*
    Полиморфизм
    Виртуальные функции
    virtual
    override
*/

int Polymorphism()
{
    setlocale(LC_ALL, "RU");
    Gun gun;
    gun.Shoot();

    SubmachineGun machineGun;
    machineGun.Shoot();
    machineGun.Foo();

    Gun* weapon = &machineGun; //полиморфизм
    weapon->Shoot();

    Bazooka bazooka;

    Knife knife;
    knife.Foo();

    Player player;
    player.Shoot(&knife);


    return 0;
}
