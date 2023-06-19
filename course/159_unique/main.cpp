#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 2, 5, 4, 4};

    auto result = unique(begin(v), end(v));

    for_each(begin(v), result, [](int a) {
        cout << a << endl;
    });

    v.erase(result, v.end());

    cout << endl;

    vector<int> v2;

    unique_copy(begin(v), end(v), back_inserter(v2));

    for_each(begin(v2), end(v2), [](int a) {
        cout << a << endl;
    });

    cout << endl;

    for_each(begin(v), end(v), [](int a) {
        cout << a << endl;
    });

    return 0;
}