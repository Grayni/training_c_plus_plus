#include <iostream>
using namespace std;

void foo() {
    cout << "I am function." << endl;
}

int sum(int a, int b) {
    return a + b;
}

void main() {
    foo();

    for (int i = 0; i < 10; i++) {
        foo();
    }

    int x = sum(10, 5);
    int y = sum(4, 3);

    cout << sum(x, y) << endl;

    system("pause");
}

