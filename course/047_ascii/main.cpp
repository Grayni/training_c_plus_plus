#include <iostream>
using namespace std;

void main() {
    cout << sizeof(char) << endl;
    setlocale(LC_ALL, "ru");

    // code in [0:127] => standard, code > 127 => lacal
    for (int i = 0; i < 256; i++) {
        cout << (double)i << "\t" << "symbol: " << (char)i << "\n";
    }
}