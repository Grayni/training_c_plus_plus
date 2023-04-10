#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "class A" << endl;
    }

    ~A() {
        cout << "desturctor A" << endl;
    }
};

class B: public A {
public:
    B() {
        cout << "class B" << endl;
    }

    ~B() {
        cout << "destructor B" << endl;
    }
};

class C: public B {
public:
    C() {
        cout << "class C" << endl;
    }

    ~C() {
        cout << "destructor C" << endl;
    }
};


int main() {
    C c;


    return 0;
}