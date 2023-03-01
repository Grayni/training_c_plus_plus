#include <iostream>
using namespace std;

int main() {
    int length = 10;
    int i = 0;

    cout << "first cycle" << endl;
    for (; i < length; i++) {
        cout << i << endl;
    }

    cout << endl << "second cycle" << endl;
    for (; i < 20; i += 2) {
        cout << i << endl;
    }

    /*cout << "infinity cycle" << endl;
    for (;;) {
        cout << "infinity";
    }*/

    for (int i = 0, j = 10; i < 10; i++, j -= 2) {
        cout << "i=" << i << ", j=" << j << ", sum=" << i + j << endl;
    }
}