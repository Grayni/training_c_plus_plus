#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main() {
    int arr1[] = {10, 15, 22, 33, 11};
    int arr2[] = {10, 15, 22, 33, 11};
    int arr3[] = {10, 15, 22, 33, 11, 15};

    bool result1 = equal(begin(arr1), end(arr1), begin(arr2));
    cout << "arr1 == arr2: " << result1 << endl; // 1

    bool result2 = equal(begin(arr1), end(arr1), begin(arr3));
    cout << "arr1 == arr3: " << result2 << endl; // 1

    bool result3 = equal(begin(arr3), end(arr3), begin(arr1));
    cout << "arr3 == arr1: " << result3 << endl; // 0

    vector<int> v1 = {10, 15, 22, 33, 11};
    vector<int> v2 = {10, 15, 22, 33, 11};

    bool result4 = equal(begin(v1), end(v1), begin(v2));
    cout << "v1 == v2: " << result4 << endl; // 1

    list<int> l1 = {10, 15, 22, 33, 11};
    vector<int> l2 = {10, 15, 22, 33, 11};

    bool result5 = equal(begin(l1), end(l1), begin(l2));
    cout << "l1 == l2: " << result4 << endl; // 1

    vector<int> m1 = {10, 11, 9};
    vector<int> m2 = {11, 10, 9};

    bool result6 = equal(begin(m1), end(m1), begin(m2));
    cout << "m1 == m2: " << result6 << endl; // 0

    sort(begin(m1), end(m1));
    sort(begin(m2), end(m2));

    bool result7 = equal(begin(m1), end(m1), begin(m2));
    cout << "sort: m1 == m2: " << result7 << endl; // 1

    vector<int> p1 = {11, 10, 20, 43, 22};
    vector<int> p2 = {11, 10, 20, 43, 22};


    auto result8 = mismatch(begin(p1), end(p1), begin(p2));

    if (result8.first == end(p1) && result8.second == end(p2)) {
        cout << "+" << endl;
    }
    else {
        cout << "-" << endl;
    }

    return 0;
}