#include <iostream>
using namespace std;

class MyClass {
private:
    int* data;
public:
    MyClass(int size) {
        data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = rand();
        }

        cout << data << " constructor MyClass" << endl;
    }

    ~MyClass() {
        delete[] data;
        cout << data << " destructor MyClass" << endl;
    }
};

void foo() {
    cout << "start" << endl;
    MyClass l(1000);
    cout << "end" << endl;
}

int main() {
    MyClass a(1);
    MyClass b(2);
    MyClass c(3);

    foo();

    return 0;
}