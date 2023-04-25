#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Foo(int value) {

    if (value < 0) {
        throw exception("invalid value: value < 0");
    }

    cout << "variable = " << value << endl;

}

int main() {
    try {
        Foo(-4);
    }
    catch (const exception& ex) {
        cout << ex.what() << endl;
    }

    return 0;
}