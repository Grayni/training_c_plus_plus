#include <iostream>
#include <ctime>

using namespace std;

int Foo(int a) {
    a++;
    return a;
}

void FillArray(int arr[], const int size) {

    int sf0 = sizeof(arr[0]);
    cout << "Sizeof arr[0]: " << sf0 << "\n\n";

    int sf = sizeof(arr);
    cout << "Sizeof in func: " << sf << "\n\n";  // x64

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
}

void PrintArray(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";
}

void main() {
    int a = 1;

    a = Foo(a);

    cout << a << endl;


    // arr
    cout << "\n\n" << "Functions: PrintArray & FillArray" << "\n\n";
    const int SIZE = 10;
    int arr[SIZE];

    int sf = sizeof(arr);
    cout << "Sizeof: " << sf << "\n\n";


    // array with garbage 
    cout << "array with garbage" << "\n";
    PrintArray(arr, SIZE);

    // fill array
    FillArray(arr, SIZE);

    // array with random values
    cout << "array with random values" << "\n";
    PrintArray(arr, SIZE);

    system("pause");
}