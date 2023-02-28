#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number 1-3: ";
    cin >> a;

    switch (a) {
    case 1:
        cout << "You number 1!";
        break;
    case 2:
        cout << "2 hemispheres";
        break;
    case 3:
        cout << "3 Seldon's crises";
        break;
    default:
        cout << "You breaked system!";
        break;
    }


    // Calculator
    double m;
    double n;
    char sign;

    double result = 0;

    char k = 'e';

    cout << endl << endl << "Enter expression with 2 values (e.g 1 + 2): ";
    cin >> m >> sign >> n;

    switch (sign) {
    case '+':
        result = m + n;
        break;
    case '-':
        result = m - n;
        break;
    case '*':
        result = m * n;
        break;
    case '/':
        result = m / n;
        break;
    default:
        k += sign;
        cout << "invalid sign: " << sign << endl;
        break;
    }

    if (k == 'e') {
        cout << "Result: " << m << " " << sign << " " << n << " = " << result << endl;
    }
}