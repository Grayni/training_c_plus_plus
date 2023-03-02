#include <iostream>
using namespace std;

int Sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 6;

    for(int i = 0; i < 10000; i++) {
        cout << i;
    }

    cout << "new point" << endl;
    cout << "code" << endl;

    int c = Sum(a, b);
    cout << c << endl;
}