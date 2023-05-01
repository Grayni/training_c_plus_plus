#include <iostream>
#include <string>

using namespace std;

template<typename T>
class SmartPointer {
public:
    SmartPointer(T* ptr) {
        this->ptr = ptr;
        cout << "contructor" << endl;
    }

    ~SmartPointer() {
        delete ptr;
        cout << "destructor" << endl;
    }

    T& operator*() {
        return *ptr;
    }
private:
    T* ptr;
};

int main() {
    SmartPointer<int> pointer = new int(5);

    cout << *pointer << endl;

    *pointer = 234;

    cout << *pointer << endl;


    return 0;
}