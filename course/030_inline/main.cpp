#include <iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

void main() {
    cout << sum(10, 5) << "\n";
}