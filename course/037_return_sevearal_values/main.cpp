#include <iostream>
using namespace std;

void foo(int *pa, int *pb, int *pc) {
    *pa = 35;
    (*pb)++;
    *pc = -20;
}

void permutation(int *p1, int *p2) {
    int buf = *p1;

    *p1 = *p2;
    *p2 = buf;
}

void main() {
    int a = 0;
    int b = 1;
    int c = 2;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << "\n\n";

    foo(&a, &b, &c);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << "\n\n";

    int val1 = 0;
    int val2 = 9;

    cout << "before permutation: " << endl;
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << "\n\n";

    permutation(&val1, &val2);
    cout << "after permutation: " << endl;
    cout << "val1: " << val1 << endl;
    cout << "val2: " << val2 << "\n\n";

    system("pause");
}