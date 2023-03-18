#include <iostream>
using namespace std;

void main() {
    int rows;
    int cols;

    cout << "enter rows count: ";
    cin >> rows;

    cout << "enter rows count: ";
    cin >> cols;


    int **arr = new int *[rows];

    // init
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    // fill
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 10;
        }
    }

    // show
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // clear memory
    for (int i = 0; i < rows; i++) {
        delete arr[i];
    }

    delete[] arr;

    system("pause");
}