#include <iostream>
using namespace std;

class CoffeeGrinder {
private:
    bool checkVoltage() {
        return false;
    }

public:
    void start() {

        if (checkVoltage()) {
            cout << "Coffee in the making. Wait.." << endl;
        }
        else {
            cout << "Error: Electrical problems" << endl;
        }
    }

};

int main() {
    CoffeeGrinder model_1;
    model_1.start();


    system("pause");
    return 0;
}