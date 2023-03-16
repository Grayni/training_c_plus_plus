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

template <typename any>
void change_vars(any &a, any &b) {
    any c = a;
    a = b;
    b = c;
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

    int a = 22;
    int b = 10;

    change_vars(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << "\n\n";

    string var1 = "hello";
    string var2 = "goodbye";

    change_vars(var1, var2);

    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
}