#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass();
    ~MyClass();

    void printMessage();

private:

};

MyClass::MyClass() {

}

MyClass::~MyClass() {

}

void MyClass::printMessage() {
    cout << "hello" << endl;
}

int main() {
    MyClass a;
    a.printMessage();

    return 0;
}