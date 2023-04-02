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

        for (int i=0; i < size; i++) {
            data[i] = i;
        }

        cout << "constructor " << this << "\n\n";
    }

    MyClass(const MyClass& other) {
        this->size = other.size;
        this->data = new int[other.size];

        for (int i=0; i < size; i++) {
            this->data[i] = other.data[i];
        }

        cout << "copy constructor " << this << "\n\n";
    }

    MyClass& operator = (const MyClass& other) {
        cout << "operator " << this << "\n\n";

        this->size = other.size;

        if (this->data != nullptr)
            delete[] this->data;

        this->data = new int[other.size];

        for (int i=0; i < other.size; i++) {
            this->data[i] = other.data[i];
        }

        for (int i=0; i < size; i++) {
            cout << this->data[i] << " ";
        }
        cout << "\n";

        return *this;
    }

    ~MyClass() {
        cout << "destructor " << this << "\n\n";
        delete[] data;
    }
};

int main() {
    MyClass a(5);
    MyClass b(10);
    MyClass c(20);

    a = b = c;
    return 0;
}