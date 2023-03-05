#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int ROW = 2;
    const int COL = 3;

    // initialization
    int arr[ROW][COL]{};

    cout << "before: " << arr[1][1] << endl;  // 0

    arr[1][1] = 1;

    cout << "after: " << arr[1][1] << endl;  // 1

    // filling handle
    int arr2[ROW][COL]{
        {2, 4, 5},
        {3, 2, 1}
    };

    cout << arr2[1][1] << endl;


    // filling with for
    srand(time(NULL));

    int arr3[ROW][COL];

    cout << arr3[1][1] << endl;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr3[i][j] = rand() % 10;
        }
    }

    cout << "\n\n" << "fill array" << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << arr3[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
}