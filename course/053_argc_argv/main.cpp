#include <iostream>
using namespace std;

void main(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }

    system("pause");
}