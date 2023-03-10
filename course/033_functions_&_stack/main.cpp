#include <iostream>
using namespace std;

int foo(int a) {
    cout << a << "\t";

    if (a == 0) {
        return 0;
    }

    a--;

    return foo(a);
}

int fact(int a) {

    if (a == 0)
        return 1;

    return a * fact(a - 1);
}

void main() {
    foo(5);

    int number = 5;
    cout << "\n\nFactorial of " << number << ": " << fact(number) << "\n";
}