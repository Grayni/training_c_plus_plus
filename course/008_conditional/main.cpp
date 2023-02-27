#include <iostream>
using namespace std;

void main() {
    bool isRain = true;

    if (isRain) {
        cout << "need umbrella" << endl;
    }
    else {
        cout << "good weather" << endl;
    }

    // e.g. 1
    int number;

    cout << "Enter number from 1 to 20: ";
    cin >> number;

    if (number > 15) {
        cout << "This number > 15";
    }
    else if (number == 5) {
        cout << "number = 5" << endl;
    }
    else if (number > 10) {
        cout << "This number > 10" << endl;
    }
    else {
        cout << "This number < 10" << endl;
    }

    // e.g. 2
    int int_number;

    cout << endl << "Enter number: ";
    cin >> int_number;

    if (int_number % 2 == 0) {
        cout << int_number << " - Even" << endl;
    }
    else {
        cout << int_number << " - Odd" << endl;
    }
}