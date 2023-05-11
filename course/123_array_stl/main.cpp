#include <iostream>
#include <array> // static array

using namespace std;

int main() {
    array<int, 4> arr = {1, 32, 43, 21};

    cout << arr[0] << endl;
    cout << arr.at(0) << "\n\n";

    for (auto el : arr) {
        cout << el << endl;
    }

    cout << endl;
    arr.fill(-1);

    for (auto el : arr) {
        cout << el << endl;
    }

    arr = {1, 32, 43, 21};
    cout << "\nfirst element: " << arr.front() << endl;
    cout << "last element: " << arr.back() << endl;

    try
    {
        cout << arr.at(5) << endl; // error
    }
    catch (const std::exception&ex)
    {
        cout << "\n" << ex.what() << endl;
    }


    return 0;
}