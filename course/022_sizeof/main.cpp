#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int a;

    for(int i = 0; i < SIZE; i++) {
        arr[i] = i * 2;
    }

    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }

    cout << endl << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(a) << endl;


    // using sizeof

    int arr_random[]{4, 3, 1, 6, 5};
    cout << endl << "<< sizeof >>" << endl;

    // length arr * bytes value of type (int = 4, double = 8 etc.)
    cout << sizeof(arr_random) << endl;

    // get size of arr if know type
    const int SIZE_ARR = sizeof(arr_random) / sizeof(int);
    cout << SIZE_ARR << "\n\n";

    // get size of arr if not know type => recomended
    const int SIZE_ARR_0 = sizeof(arr_random) / sizeof(arr_random[0]);
    cout << SIZE_ARR_0 << endl;
}