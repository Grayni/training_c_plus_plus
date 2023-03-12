#include <iostream>
#include <ctime>
using namespace std;

void main() {

    const int SIZE = 5;
    int arr[SIZE];


    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand();
    }

    for (int i=0; i < SIZE; i++) {
        cout << arr[i] << "\t";
    }

    cout << "\n\n" << "====================" << "\n\n";

    int *pArr = arr;

    for (int i=0; i < SIZE; i++) {
        cout << pArr[i] << "\t";
    }

    cout << "\n\n" << "====================" << "\n\n";

    cout << "arr: " << arr << endl;
    cout << "pArr: " << pArr << endl;

    cout << "\n\n" << "====================" << "\n\n";
    for (int i=0; i < SIZE; i++) {
        cout << pArr[i] << "\t";
    }

    cout << "\n\n" << "====================" << "\n\n";

    for (int i = 0; i < SIZE; i++) {
        cout << *(pArr + i) << "\t";
    }

    // first element of arr
    cout << "\n\nfirst => *arr: " << *arr << endl;
    cout << "second => *(arr+1): " << *(arr + 1) << endl;

    cout << "\n\n" << "====================" << "\n\n";

    // adresses of cell
    for (int i=0; i < SIZE; i++) {
        // every next step + 4 bytes
        cout << (arr + i) << "\n";
    }
}