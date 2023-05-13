#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 4> arr1 = {1, 94, 22, 232};
    array<int, 4> arr2 = {1, 94, 22, 232};
    array<int, 4> arr3 = {1, 94, 22, 233};
    array<int, 4> arr4 = {2, 94, 22, 232};

    bool result12 = (arr1 == arr2); // 1
    cout << result12 << endl;

    bool result23 = (arr2 < arr3); // 1
    cout << result23 << endl;

    bool result13 = (arr1 > arr3); // 0
    cout << result13 << endl;

    bool result34 = (arr3 == arr4); // 0
    cout << result34 << endl;

    return 0;
}