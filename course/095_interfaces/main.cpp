#include <iostream>
using namespace std;

class IBicycle {
public:
    void virtual spinWheel() = 0;
    void virtual ride() = 0;
};

class SimpleBicycle: public IBicycle {
    void spinWheel() override {
        cout << "SimpleBicycle spinWheel()" << endl;
    }

    void ride() override {
        cout << "SimpleBicycle ride()" << endl;
    }
};

class SportBicycle: public IBicycle {
    void spinWheel() override {
        cout << "SportBicycle spinWheel()" << endl;
    }

    void ride() override {
        cout << "SportBicycle ride()" << endl;
    }
};

class Human {
public:
    void rideOn(IBicycle& bicycle) {
        cout << "spic wheel" << endl;
        bicycle.spinWheel();
        cout << "moving" << endl;
        bicycle.ride();
    }
};

int main() {
    Human h;
    SimpleBicycle sb;
    SportBicycle spb;

    h.rideOn(sb);
    h.rideOn(spb);

    return 0;
}