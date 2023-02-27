#include <iostream>
using namespace std;

void main() {
    cout << (4 > 5) << endl;  // 0
    cout << (4 < 5) << endl;  // 1

    int a = 1;
    int b = 2;

    cout << (a == b) << endl;
    cout << (++a == b) << endl;

    cout << ((a == b) && (a == 3)) << endl;
    cout << ((a == b) && (a == 2)) << endl;

    cout << ((a == b) || (a == 3)) << endl;
    cout << ((a != b) || (a == 3)) << endl;
}