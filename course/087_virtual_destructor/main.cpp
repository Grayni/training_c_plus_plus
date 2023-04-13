#include <iostream>
using namespace std;

class A {
public:
    A() {
        arr = new int[10];
        cout << "Dynamic memory has been allocated A" << endl;
    }

    virtual ~A() {
        delete[] arr;
        cout << "Dynamic memory has been deallocated A" << endl;
    }

private:
    int* arr;
};

class B: public A {
public:
    B() {
        arr = new int[10];
        cout << "Dynamic memory has been allocated B" << endl;
    }

    ~B() override {
        delete[] arr;
        cout << "Dynamic memory has been deallocated B" << endl;
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