#include <iostream>
using namespace std;

void foo(int a, int b);

void main() {
    foo(2, 6);

    system("pause");
}

void foo(int a, int b) {
    cout << "Multiplication function: " << a << " x " << b << " = " << a * b << "\n";
}