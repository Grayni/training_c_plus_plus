#include <iostream>
using namespace std;

void foo(int q, int a = 5, double b = 0.5) {
    cout << "q: " << q << "\n\n";

    for (int i = 0; i < a; i++) {
        cout << "#" << "\n";
    }

    cout << "\n";
}


void main() {
    foo(3, 3);
    foo(24);
}