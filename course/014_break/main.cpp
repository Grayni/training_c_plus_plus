#include <iostream>
using namespace std;

int main() {
    int i = 0;

    cout << "for" << endl;

    cout << "start" << endl;
    for (;; i++) {
        cout << i << endl;

        if (i == 10) {
            break;
        }
    }
    cout << "end" << endl << endl;

    cout << "while" << endl << "start" << endl;
    while (true) {
        i++;
        cout << i << endl;
        if (i == 20) {
            break;
        }
    }
    cout << "end" << endl;
}