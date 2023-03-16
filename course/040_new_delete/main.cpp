#include <iostream>
using namespace std;

void main() {
    int *pa = new int;

    cout << pa << endl;

    *pa = 10;

    cout << *pa << endl;

    delete pa;

    cout << pa << endl;  // pointer exist, but is empty
}