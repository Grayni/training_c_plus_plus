#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    int arr[] = {1, 4, 2, 4, 6};

    cout << " not change arr: \n";
    for (auto element : arr) {
        element = -1; // not change arr
        cout << element << endl;
    }

    cout << "\n\n show arr: \n";

    // show arr
    for (auto element : arr) {
        cout << element << endl;
    }

    cout << "\n\n change arr: \n";
    // change arr, fastly
    for (auto &element : arr) {
        element = -1;
        cout << element << endl;
    }

    cout << "\n\n show arr: \n";
    // show arr
    for (auto element : arr) {
        cout << element << endl;
    }

    // stl list
    list<int> myList = {1, 2, 3, 4, 5, 6};

    cout << "\n\n show list stl: \n";
    for (const auto &element : myList) {
        cout << element << endl;
    }

    return 0;
}