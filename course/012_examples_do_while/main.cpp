#include <iostream>
using namespace std;


// Find sum odd integers in range(a, b). Probably: a > b;


int main() {
    double a;
    double b;

    cout << "Enter range of numbers (a b): ";
    cin >> a >> b;
    cout << endl;

    if (a > b) {
        double c = a;
        a = b;
        b = c;
    }
    else if (a == b) {
        cout << "invalid range" << endl;
        return 0;
    }

    a = (int)(a + 0.5);

    if ((int)a % 2 == 0) a += 1;

    int sumOdd = 0;

    do {
        sumOdd += a;
        a += 2;
    } while (a <= b);

    cout << sumOdd << endl << endl;
}