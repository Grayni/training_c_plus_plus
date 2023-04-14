#include <iostream>
using namespace std;

class Car {
public:
    Car()
    {
        cout << "constructor Car" << endl;
    }

    void drive() {
        cout << "The car has started moving." << endl;
    }

};

class Plane {
public:
    Plane()
    {
        cout << "constructor Plane" << endl;
    }

    void fly() {
        cout << "The plane has taken off." << endl;
    }
};

class FlyingCar1: public Car, public Plane { // <--------- order Car, Plane
public:
    FlyingCar1()
    {
        cout << "constructor FlyingCar" << endl;
    }
};

class FlyingCar2: public Plane, public Car { // <--------- order Plane, Car
public:
    FlyingCar2()
    {
        cout << "constructor FlyingCar" << endl;
    }
};


int main() {
    cout << "FlyingCar1 order of consturctors: " << endl;
    FlyingCar1 fc1;

    cout << "\n\n";

    cout << "FlyingCar2 order of consturctors: " << endl;
    FlyingCar2 fc2;




    return 0;
}