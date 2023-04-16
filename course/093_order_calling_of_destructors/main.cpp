#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Constructor Car" << endl;
    }

    ~Car() {
        cout << "Destructor Car" << endl;
    }

    void drive() {
        cout << "The car has started moving." << endl;
    }
};

class Plane {
public:
    Plane() {
        cout << "Constructor Plane" << endl;
    }

    ~Plane() {
        cout << "Destructor Plane" << endl;
    }

    void fly() {
        cout << "Plane has taken off." << endl;
    }
};

class FlyingCar: public Car, public Plane {
public:
    FlyingCar() {
        cout << "Constructor FlyingCar" << endl;
    }
    ~FlyingCar() {
        cout << "Destructor FLyingCar" << endl;
    }
};

int main() {
    FlyingCar fc;


    return 0;
}