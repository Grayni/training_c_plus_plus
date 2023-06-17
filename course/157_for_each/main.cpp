#include <iostream>
#include <algorithm>

using namespace std;

void Foo(int a) {
    cout << a << endl;
}

int main() {
    int arr[] = {1, 2, 5, 10};

    for_each(begin(arr), end(arr), Foo);

    cout << endl;

    for (auto element : arr) {
        Foo(element);
    }

    cout << endl;

    for_each(begin(arr), end(arr), [](int a) {
        Foo(a);
    });

    cout << endl;

    for (auto &element : arr) {
        element++;
    }

    for (auto &element : arr) {
        Foo(element);
    }



    return 0;
}