#include <iostream>
#include <functional>
#include <vector>

using namespace std;

string name;

void Foo() {
    cout << "Foo()" << "\n\n";
}

int Sum(int a, int b) {
    return a + b;
}

string Bar1(int a) {
    if (a == -1) {
        return __func__;
    }

    if (a > 10 && a < 40) {
        cout << a << " ";
    }

    return "";
}

string Bar2(int a) {
    if (a == -1) {
        return __func__;
    }

    if (a % 2) {
        cout << a << " ";
    }

    return "";
}

void DoWork(vector<int> &vc, function<string(int)> f) {

    cout << "DoWork(" << f(-1) << ")" << endl;
    for (auto el : vc) {
        f(el);
    }
    cout << "\n\n";
}

void DoWork2(vector<int> &vc, vector<function<string(int)>> funcVector) {
    cout << "DoWork2()" << endl;
    for (auto el : vc) {
        for (auto &fel : funcVector) {
            fel(el);
        }
    }
    cout << "\n\n";
}

int main() {
    function<void()> f;
    f = Foo;
    f();

    function<int(int, int)> sum;
    sum = Sum;
    cout << "Sum()\n" << sum(2, 5) << "\n\n";

    vector<int> vc = {1, 32, 55, 23, 90, 43, 85, 34, 86, 92};

    DoWork(vc, Bar1);
    DoWork(vc, Bar2);

    vector <function<string(int)>> funcVector;
    funcVector = {Bar1, Bar2};
    DoWork2(vc, funcVector);

    return 0;
}