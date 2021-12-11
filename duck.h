#ifndef DUCK_H
#define DUCK_H

# include <iostream>
#include "flybehavior.h"

using namespace std;

class Duck {
public:
    FlyBehavior *flyBehavior;

    Duck();
    void performFly();
    void swim();
    virtual void display() = 0;
};

#endif // DUCK_H
