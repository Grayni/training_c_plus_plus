#include <iostream>
using namespace std;

void main() {
    // 1
    int a = 5;
    int *px = &a;

    cout << px << "\n";  // link a
    a = 10;
    cout << px << "\n";  // link a

    // 2
    // double *pa = &a;  // error // type *pa need = type a
    double b = 1.5;
    double *pa = &b;  // good

    cout << pa << "\n";
    cout << *pa << "\n";  // 1.5


    // 3
    int c = 20;

    int *pc = &c;
    int *pc2 = &c;

    cout << "pc: " << pc << "\n";
    cout << "pc2: " << pc2 << "\n";

    *pc2 = 10;

    cout << "c: " << c << "\n";  // change pc2 => change c
    cout << "pc: " << *pc << "\n"; // cnage pc2 => change pc




    system("pause");
}