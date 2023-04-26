#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Foo(int value) {

    if (value < 0) {
        //throw exception("invalid value: value < 0");
        throw "invalid value: value < 0";
    }

    if (value == 0) {
        throw exception("value == 0");
    }

    if (value == 1) {
        throw 1;
    }

    cout << "variable = " << value << endl;

}

int main() {
    try {
        Foo(1);
    }
    catch (const exception& ex) {
        cout << "block 1" << endl;
    }
    catch (const char* ex) {
        cout << "block 2" << endl;
    }
    catch (...) {
        cout << "any error" << endl;
    }

    return 0;
}