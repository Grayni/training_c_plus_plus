#include <iostream>
using namespace std;

int main() {
    cout << " << cycle while >>" << endl << endl;
    int a = 0;

    // liftoff
    while (a < 10) {
        cout << " (" << a++ << ") The display this line" << endl;
    }


    a = 10;

    // not liftoff
    while (a < 10) {
        cout << " (" << a++ << ") The display this line" << endl;
    }


    cout << endl << " << cycle do while >>" << endl << endl;
    // liftoff
    do {
        cout << " (" << a++ << ") The display this line" << endl;
    } while (a < 10);
}