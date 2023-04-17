#include <iostream>
using namespace std;

class Car {
public:
    void use() {
        cout << "The car has started moving." << endl;
    }
};

class Plane {
public:
    void use() {
        cout << "The plane has taken off." << endl;
    }
};

class FlyingCar: public Car, public Plane {
public:
};

int main() {
    FlyingCar fc;

    fc.Car::use();
    fc.Plane::use();

    return 0;
}