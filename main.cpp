#include <QCoreApplication>
#include "gumballmachine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Gumballmachine *gumballmachine = new Gumballmachine(5);
    cout << gumballmachine->toString().toStdString() << endl;

    gumballmachine->insertQuarter();
    gumballmachine->turnCrank();
    cout << gumballmachine->toString().toStdString() << endl;

    gumballmachine->insertQuarter();
    gumballmachine->ejectQuarter();
    gumballmachine->turnCrank();
    cout << gumballmachine->toString().toStdString() << endl;

    gumballmachine->insertQuarter();
    gumballmachine->turnCrank();
    gumballmachine->insertQuarter();
    gumballmachine->turnCrank();
    gumballmachine->ejectQuarter();
    cout << gumballmachine->toString().toStdString() << endl;

    gumballmachine->insertQuarter();
    gumballmachine->insertQuarter();
    gumballmachine->turnCrank();
    gumballmachine->insertQuarter();
    gumballmachine->turnCrank();
    gumballmachine->insertQuarter();
    gumballmachine->turnCrank();
    cout << gumballmachine->toString().toStdString() << endl;

    return a.exec();
}
