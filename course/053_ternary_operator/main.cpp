#include <iostream>
using namespace std;

void main() {
    int a = 5;

    if (a < 10)
        cout << "a < 10" << endl;
    else if (a == 10)
        cout << "a == 10" << endl;
    else
        cout << "a > 10" << endl;

    int b = 11;
    cout << (b < 10 ? "b < 10" : b == 10 ? "b == 10" : "b > 10") << endl;

    system("pause");
}