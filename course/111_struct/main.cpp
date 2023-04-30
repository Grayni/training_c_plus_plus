#include <iostream>
#include <string>

using namespace std;

class MyClass {
    int a = 10;
};

struct MyStruct1 {
    int a = 20;
};

struct MyStruct2: MyStruct1 {

};

int main() {
    MyClass c;
    MyStruct1 s1;

    MyStruct2 s2;

    // cout << c << endl; // default: private // error 
    cout << s1.a << endl; // default: public
    cout << s2.a << endl;


    return 0;
}