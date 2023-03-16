#include <iostream>
using namespace std;

void main() {
    int *pa = new int;
    *pa = 10;

    cout << pa << endl;

    cout << *pa << endl;
    delete pa;

    pa = NULL; // or >>> pa = 0;

    // new variant in 11 standard C++
    pa = nullptr; // to use with pointers


    if (pa != NULL) {
        cout << pa << endl;
    }
    else {
        cout << "end" << endl;
    }

    system("pause");
}