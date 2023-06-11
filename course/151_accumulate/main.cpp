#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main() {
    vector<int> v = {2, 3, 5};


    auto result1 = accumulate(v.begin(), v.end(), 0);
    cout << "result1 sum: " << result1 << endl;


    int c[] = {2, 3, 6};

    auto result2 = accumulate(begin(c), end(c), 0);
    cout << "result2 sum: " << result2 << endl;

    auto result3 = accumulate(begin(c), end(c), 1, [](int a, int b) {
        return a * b;
    });
    cout << "result3 prod: " << result3 << endl;

    auto result4 = accumulate(begin(c), end(c), 0, [](int a, int b) {
        if (b % 2 == 0) {
            return a + b;
        }
        else {
            return a;
        }
    });

    cout << "result4 even sum: " << result4 << endl;

    auto result5 = accumulate(next(begin(c)), end(c), to_string(c[0]), [](string a, int b) {
        return a + to_string(b);
    });

    cout << "result5 string: " << result5 << endl;

    return 0;
}