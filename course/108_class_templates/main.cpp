#include <iostream>
#include <string>

using namespace std;

class Point {
public:
    Point() {
        x = y = z = 0;
    }
    Point(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

private:
    int x;
    int y;
    int z;
};

template<typename T1, typename T2> // alternative "typename" = "class"
class MyClass {
public:
    MyClass(T1 value1, T2 value2) {
        this->value1 = value1;
        this->value2 = value2;
    }

    void dataTypeSize() {
        cout << "value1: " << sizeof(value1) << endl;
        cout << "value2: " << sizeof(value2) << endl;
    }

    T1 foo() {
        return value1;
    }

private:
    T1 value1;
    T2 value2;
};

int main() {
    int a = 5;
    double b = 4.4442;
    Point point(22, 33, 11);

    MyClass<int, Point> object1(a, point);
    MyClass<double, int> object2(a, b);

    object1.dataTypeSize();
    object2.dataTypeSize();

    int c = object1.foo();
    cout << c << endl;

    return 0;
}