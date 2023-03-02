#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 2; i++) {
        cout << "== i: " << i << endl;

        for(int j = 0; j < 2; j++) {
            cout << "==== j: " << j << endl;
        }
    }

    // Rectangle
    int sideA;
    int sideB;

    cout << endl << "Enter side a: ";
    cin >> sideA;

    cout << endl << "Enter side b: ";
    cin >> sideB;

    for(; sideA > 0; sideA--) {

        int loopB = sideB;

        for(; loopB > 0; loopB--) {
            cout << "*";
        }

        cout << endl;
    }

    system("pause");
}