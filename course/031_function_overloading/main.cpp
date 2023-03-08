#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

void main() {
    cout << sum(5, 10) << "\n";
    cout << sum(5.2, 10.5) << "\n";
    cout << sum(1, 2, 3) << "\n";
}