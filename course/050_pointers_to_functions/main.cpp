#include <iostream>
using namespace std;

int foo1(int a) {
    return a - 1;
}

int foo2(int a) {
    return a * 2;
}


string getDataFromDB() {
    return "Data from DB";
}

string getDataProgramWebServer() {
    return "data from WebServer";
}

void showInfo(string(*foo)()) {
    cout << foo() << endl;
}

void main() {
    int(*fooPointer1)(int a);

    fooPointer1 = foo1;
    cout << fooPointer1(5) << endl;


    int(*fooPointer2)(int a);
    fooPointer2 = foo2;
    cout << fooPointer2(5) << endl;

    showInfo(getDataFromDB);
}