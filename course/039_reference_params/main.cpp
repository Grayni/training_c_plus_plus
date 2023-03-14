#include <iostream>
using namespace std;

void foo1(int a) {
    a = 1;
}

void foo2(int &a) {
    a = 2;
}

void foo3(int *a) {
    *a = 3;
}

void main() {
    int value = 5;
    cout << value << endl;

    cout << "foo1: ";
    foo1(value);
    cout << value << "\n\n";

    cout << "foo2: ";
    foo2(value);
    cout << value << "\n\n";

    cout << "foo3: ";
    foo3(&value);
    cout << value << "\n\n";

}