#include <iostream>
using namespace std;

class MyClass {
private:
    int size;

public:
    int* data;

    MyClass(int size) {
        this->size = size;
        this->data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = i;
        }

        cout << "constructor\t" << this << "\n\n";
    }

    MyClass(const MyClass& other) {
        this->size = other.size;
        this->data = new int[other.size];

        for (int i = 0; i < other.size; i++) {
            this->data[i] = other.data[i];
        }
        cout << "copy constructor\t" << this << "\n\n";
    }

    ~MyClass() {
        cout << "destructor\t" << this << "\n\n";
        delete[] data;
    }
};

void foo(MyClass value) {
    cout << "run foo" << "\n\n";
}

MyClass foo2() {
    cout << "run foo2" << "\n\n";
    MyClass temp(2);

    return temp;
}

int main() {
    MyClass a(5);
    MyClass b(a);

    //foo(a)
    return 0;
}