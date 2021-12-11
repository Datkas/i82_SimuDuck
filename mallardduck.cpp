#include "mallardduck.h"

MallardDuck::MallardDuck()
{
    flyBehavior = new FlyWithWings();
}

void MallardDuck::display() {
    cout << "I'am MallardDuck" << endl;
}

