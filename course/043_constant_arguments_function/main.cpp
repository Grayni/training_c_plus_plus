#include <iostream>
using namespace std;

void fillArray(int* const arr, const int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 20;
    }
}

void showArray(const int* const arr, const int size, string name_arr) {
    cout << name_arr << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void main() {
    const int size = 10;
    int array0[size];

    fillArray(array0, size);
    showArray(array0, size, "array0");

    int* array1 = new int[size];
    int* array2 = new int[size];

    fillArray(array1, size);
    showArray(array1, size, "array1");

    fillArray(array2, size);
    showArray(array2, size, "array2");

    /// copy array2
    delete[] array1;

    array1 = new int[size];

    for (int i = 0; i < size; i++) {
        array1[i] = array2[i];
    }

    cout << endl;
    showArray(array1, size, "array1");
    showArray(array2, size, "array2");

    delete[] array1;
    delete[] array2;


}
