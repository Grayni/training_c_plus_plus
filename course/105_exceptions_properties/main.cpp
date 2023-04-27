#include <iostream>
#include <string>

using namespace std;

class MyException: public exception {
public:
    MyException(const char* msg, int dataState):exception(msg) {
        this->dataState = dataState;

    }
    int getDataState() {
        return this->dataState;
    }
private:
    int dataState;
};

void Foo(int value) {
    if (value < 0) {
        throw exception("Value < 0");
    }

    if (value == 0) {
        throw exception("Value == 0");
    }

    if (value == 1) {
        throw MyException("value == 1", value);
    }
}

int main() {
    try {
        Foo(1);
    }
    catch (MyException& ex) {
        cout << "error: " << ex.what() << endl;
        cout << ex.getDataState() << endl;
    }

    return 0;
}