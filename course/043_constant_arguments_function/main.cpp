#include <iostream>
using namespace std;

void fillArray(int* const arr, const int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 20;
    }
}

void showArray(int* const arr, const int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void main() {
    const int size = 10;
    int arr[size];

    fillArray(arr, size);
    showArray(arr, size);
}
