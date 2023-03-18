#include <iostream>
using namespace std;

void fillArray(int* const arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void showArray(const int* const arr, const int size, string name_arr) {
    cout << name_arr << ":";
    for (int i = 0; i < size; i++) {
        cout << "\t" << arr[i];
    }
    cout << endl;
}

void pushBack(int*& arr, int& size, const int value) {
    int* newArray = new int[size + 1];

    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }

    newArray[size] = value;

    delete[] arr;

    ++size;
    arr = newArray;
}

void popBack(int*& arr, int& size) {
    int* newArray = new int[size - 1];

    for (int i = 0; i < size - 1; i++) {
        newArray[i] = arr[i];
    }

    delete[] arr;

    --size;
    arr = newArray;
}

void shiftBack(int*& arr, int& size) {
    int* newArray =new int[size - 1];

    for (int i = 1; i < size; i++) {
        newArray[i - 1] = arr[i];
    }

    delete[] arr;

    arr = newArray;
    --size;
}

void main() {
    int size = 10;
    int* arr = new int[size];

    fillArray(arr, size);
    showArray(arr, size, "arr");
    cout << "size: " << size << "\n\n";

    pushBack(arr, size, 10);
    showArray(arr, size, "new arr");
    cout << "size: " << size << "\n\n";

    popBack(arr, size);
    showArray(arr, size, "old arr");
    cout << "size: " << size << "\n\n";

    shiftBack(arr, size);
    showArray(arr, size, "arr_short");
    cout << "size: " << size << "\n\n";

    delete[] arr;
}