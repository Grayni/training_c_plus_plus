#include <iostream>
using namespace std;

int main() {
    const int size = 5;  // size of array
    int arr[size];

    // size better => sizeof(arr) / sizeof(*arr)

    for(int i = 0; i < size; i++) {
        arr[i] = i * i;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}