#include <iostream>
using namespace std;

int main() {
    int i = 0;

    cout << "for" << endl << "start" << endl;
    for (; i < 10; i++) {
        if (i % 2 == 0) continue;
        cout << i << endl;
    }
    cout << "end" << endl << endl;

    cout << "while" << endl << "start" << endl;
    while (true) {
        ++i;
        if (i == 30) break;
        if (i % 3 == 0) continue;

        cout << i << endl;
    }
    cout << "end" << endl;
}