#include <iostream>
using namespace std;

void main() {
    int a = 5;
    int *pa = &a;
    int &aref = a;

    cout << "*pa: " << *pa << endl;
    cout << "&aref: " << aref << endl;

    aref++;
    cout << "&aref++: " << aref << endl;
    cout << "a: " << a << endl; // change aref => change a

    int *pp1; // normal
    //int &pref; // error

    int *pp2 = nullptr; // good
    // int &pref = nullptr; error

    int *ppa = &aref;

    cout << "*ppa: " << *ppa << endl;

    *ppa = 12;
    // pointer or reference change all common values
    cout << "aref: " << aref << endl;
    cout << "a: " << a << endl;
}