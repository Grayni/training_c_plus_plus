#include <iostream>
#include <functional>
#include <vector>

using namespace std;

void Foo(int a) {
    if (a > 10 && a < 40) {
        cout << "FOO " << a << " ";
    }
}

void Bar(int a) {
    if (a % 2 == 0) {
        cout << "BAR " << " ";
    }
}

void Baz(int a) {
    cout << "BAZ " << endl;
}

void DoWork(vector<int> &vc, function<void(int)> func) {
    for (auto el : vc) {
        func(el);
    }
}


int main() {

    vector<int> vc = {43, 42, 84, 92, 85};

    function<void(int)> f;

    f = [](int a) {
        cout << "lambda1 " << a << " ";
    };

    DoWork(vc, f);

    cout << "\n\n";

    DoWork(vc, [](int a) {
        cout << "lambda2 " << a << " ";
    });

    cout << "\n\n";

    int p = 0;

    auto func = [&p]() {
        p = 5;
        cout << p;
    };

    func();

    cout << "\n\n";

    auto sum = [](int a, int b) {
        return a + b;
    };

    auto q = sum(2, 4);

    cout << q << endl;
    return 0;
}