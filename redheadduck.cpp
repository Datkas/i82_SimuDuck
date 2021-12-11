#include "redheadduck.h"

RedheadDuck::RedheadDuck()
{
    flyBehavior = new FlyWithWings();
}

void RedheadDuck::display() {
    cout << "I'am RedheadDuck" << endl;
}
