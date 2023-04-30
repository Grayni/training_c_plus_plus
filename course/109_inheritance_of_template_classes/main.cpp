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

template<class T1>
class TypeSize {
public:
    TypeSize(T1 value) {
        this->value = value;
    }

    void dataTypeSize() {
        cout << "value: " << sizeof(value) << endl;
    }

    T1 value;
};

template<class T1>
class TypeInfo: public TypeSize<T1> {
public:
    TypeInfo(T1 value):TypeSize<T1>(value) {
    }

    void showTypeName() {
        cout << "Type name: " << typeid(this->value).name() << endl;
    }
};

int main() {
    double a = 4.44;
    TypeInfo<double> objectA(a);
    objectA.showTypeName();
    objectA.dataTypeSize();

    Point point(22, 15, 22);
    TypeInfo<Point> objectPoint(point);
    objectPoint.showTypeName();
    objectPoint.dataTypeSize();

    return 0;
}