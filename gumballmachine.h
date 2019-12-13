#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H

#include <QString>
#include <QStringList>
#include <iostream>
using namespace std;

class Gumballmachine
{
public:
    const static int SOLD_OUT = 0;
    const static int NO_QUARTER = 1;
    const static int HAS_QUARTER = 2;
    const static int SOLD = 3;

    int state = SOLD_OUT;
    int count = 0;

    Gumballmachine(int count);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void refill(int numGumBalls);
    QString toString();
};

#endif // GUMBALLMACHINE_H
