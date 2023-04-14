#include <iostream>
using namespace std;

class Car {
public:
    void drive() {
        cout << "The car has started moving." << endl;
    }

};

class Plane {
public:
    void fly() {
        cout << "The plane has taken off." << endl;
    }
};

class FlyingCar: public Car, public Plane {
};


int main() {
    Car c;
    c.drive();

    Plane p;
    p.fly();

    FlyingCar fc;
    fc.drive();
    fc.fly();

    Car* ptrc = &fc;
    Plane* ptrp = &fc;

    // only drive
    ptrc->drive();

    // only fly
    ptrp->fly();

    return 0;
}