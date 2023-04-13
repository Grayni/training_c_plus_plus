#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Allocated A" << endl;
    }

    virtual ~A() = 0;
};

A::~A() { cout << "deallocated A" << endl; };



class B: public A {
public:
    B() {
        cout << "allocated B" << endl;
    }

    ~B() override {
        cout << "deallocated B" << endl;
    }

private:
    int* arr;

};

int main() {
    // B b;

    A* ptrB = new B;
    delete ptrB;


    return 0;
}