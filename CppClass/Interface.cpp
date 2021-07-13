#include <iostream>
#include "HumanRide.h"
#include "SimpleBicycle.h"
#include "SportBicycle.h"
#include "IBicycle.h"

using namespace std;


/*
    Èםעונפויסû
*/

int Interface()
{
    setlocale(LC_ALL, "RU");

    HumanRide h;

    SimpleBicycle simpleBicycle;
    h.RideOn(simpleBicycle);

    SportBicycle sportBicycle;
    h.RideOn(sportBicycle);

    cout << endl;

    IBicycle* ib = new SimpleBicycle;
    ib->Ride();
    ib->TwistTheWheel();
    delete ib;
    ib = new SportBicycle;
    ib->Ride();
    ib->TwistTheWheel();
    delete ib;

    return 0;
}
