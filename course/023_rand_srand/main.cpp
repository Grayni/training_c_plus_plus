#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

int main() {
    // time now at seconds
    int t = time(NULL);
    cout << "time: " << t << "\n\n";

    // seed
    srand(time(NULL));

    // random value
    int value = rand();

    // array with unique values (1 - 19)
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        value = rand() % 20;

        int memory = 0;

        for (int j = 0; j < SIZE; j++) {
            if (value == arr[j]) {
                memory += 1;
                break;
            }
        }

        if (memory) {
            i -= 1;
        }
        else {
            arr[i] = value;
        }

    }

    cout << "Array with unique values" << "\n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << ' ';
    }

    cout << "\n\n";


    // random lines
    cout << "Random matrix" << "\n";
    int a = rand();
    int b = rand();


    while (true) {
        // range 5-24
        a = rand() % 25 + 5;
        for (int i = 0; i < a; i++) {
            b = rand() % 200 + 50;
            a = rand() % 25 + 5;
            cout << a << ' ';
            Sleep(b);
        }
        cout << endl;

        // windows
        int l = rand();
        l = rand() % 200 + 400;
        Sleep(l);
    }
}

