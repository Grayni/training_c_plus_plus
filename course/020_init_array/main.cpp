#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 55, 33, 1};  // old form write
    int arr2[]{23, 53, 75, 2};  // modern form of write
    int arr3[5]{1, 2, 3};  // arr[3] => 0, arr[4] => 0
    int arr4[4]{};  // full zeros

    cout << arr1[3] << endl;
    cout << arr2[1] << endl;
    cout << arr3[1] << endl;

    int length = sizeof(arr2) / sizeof(*arr2);  // 4
    for(int i = 0; i < length; i++) {
        cout << arr2[i] << " ";
    }

}