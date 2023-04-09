#include <iostream>
using namespace std;

class A {
public:
    string msgOne = "message 1";
private:
    string msgTwo = "message 2";
protected:
    string msgThree = "message 3";
};

class B: public A {
public:
    void printMessage() {
        cout << msgOne << endl;
    }

    //void printMessage2() {
    //    cout << msgTwo << end;
    //} // not found

    void printMessage3() {
        cout << msgThree << endl;
    }
};


int main() {
    B b;
    b.printMessage();
    b.printMessage3();
    cout << b.msgOne << endl; // +
    // b.msgTwo // -
    // b.msgThree // - , but in inheretance +

    return 0;
}