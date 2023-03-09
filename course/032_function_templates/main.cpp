#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 sum(T1 a, T2 b) {
    return a + b;
}

template <class T>
void show(T a) {
    cout << a << "\n";
}

// typename == class

void main() {
    // int sum
    cout << sum(2, 5) << "\n";

    // float sum
    cout << sum(2.2, 5.5) << "\n";

    // sum different types 1 (first float)
    cout << sum(2.2, 5) << "\n";

    // sum different types 2 (first int)
    cout << sum(2, 5.5) << "\n";

    show(5);
}