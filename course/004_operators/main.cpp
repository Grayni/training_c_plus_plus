#include <iostream>
using namespace std;

void main() {
    int a = 5;
    cout << a << endl;

    a = -a;
    cout << a << endl;

    int b = 2;
    int c;

    c = a + b;
    cout << c << endl;
    cout << a * b << endl;
    cout << a % c << endl;

    // home
    int l;
    int m;
    int n;
    cout << "Enter 3 numbers: " << endl;
    cin >> l >> m >> n;

    cout << "Sum: " << l + m + n << endl;
    cout << "Product: " << l * m * n << endl;
    cout << "Mean: " << (double)(l + m + n) / 3 << endl;

}