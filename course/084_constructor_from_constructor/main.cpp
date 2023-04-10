#include <iostream>
using namespace std;

class A {
public:
    A() {
        this->msg = "empty message";
    }

    A(string msg) {
        this->msg = msg;
    }

    void printMsg() {
        cout << msg << endl;
    }

private:
    string msg;
};

class B: public A {
public:
    B():A("new message") {
        cout << "constructor B" << endl;
    }
};

int main() {
    B b;
    b.printMsg();

    return 0;
}