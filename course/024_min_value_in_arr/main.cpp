#include <iostream>
#include <ctime>

using namespace std;



int main() {
    srand(time(NULL));
    int value = rand();

    const int SIZE = 10;
    int arr[SIZE]{};

    // create arr
    for (int i = 0; i < SIZE; i++) {
        value = rand() % 20;
        arr[i] = value;
    }

    // show arr
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << ' ';
    }

    // find min value
    int minimum = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (minimum > arr[i]) {
            minimum = arr[i];
        }
    }

    cout << "\n\n" << minimum << endl;
}
