#include <iostream>

using namespace std;

class MyClass {
public:
    int l = 11;

    void msg() {
        cout << "\nmsg" << endl;
    }

    void lambda() {
        auto f = [this]() {
            this->msg();
        };

        f();
    }

};


int main() {

    int a = 5;
    int b = 10;

    auto f = [&a, b]() {
        a = 50;
        cout << a << " " << b << endl; // 50 10
        return 0;
    };

    f();

    cout << endl;

    auto d = [=]() {
        cout << a << " " << b << endl; // 50 10
    };

    d();

    cout << endl;

    auto c = [=]() mutable {
        a = 100;
        b = 200;

        cout << a << " " << b << endl; // 100 200
    };

    c();

    cout << endl;

    cout << a << " " << b << endl; // 50 10

    cout << endl;

    auto m = [&]() {
        a = 20;
        b = 40;
        cout << a << " " << b << endl; // 20 40
    };

    m();

    cout << endl;

    cout << a << " " << b << endl; // 20 40


    MyClass cls;

    cls.lambda();

    cout << endl;

    auto p = []() -> int {
        return 3.5; // float value
    };

    auto result = p();

    cout << result << endl; // int 3

    return 0;
}