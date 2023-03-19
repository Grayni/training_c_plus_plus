#include <iostream>
using namespace std;

void main() {
    double a = 22.2;

    cout << a << endl;
    cout << (int)a << endl;
    cout << a << endl;

    a = (int)a;
    cout << a << endl;
    cout << (bool)a << endl;
    cout << (bool((bool)a - 1)) << endl;
    cout << bool(NULL) << endl;
    cout << (char)a << endl;
    cout << (char)NULL << endl;

    double n = 12.5;
    int m = 10;
    cout << n + m << endl;

    int j = n;
    cout << j << endl;

    double i = m;
    cout << i + 0.2 << endl;
}

