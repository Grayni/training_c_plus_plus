#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "class A" << endl;
    }
};

class B: public A {
public:
    B() {
        cout << "class B" << endl;
    }
};

class C: public B {
public:
    C() {
        cout << "class C" << endl;
    }
};



int main() {
    C c;

    return 0;
}