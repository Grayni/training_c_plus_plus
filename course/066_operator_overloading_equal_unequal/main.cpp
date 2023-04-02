#include <iostream>
using namespace std;

class MyClass {
private:
    int* data;
public:
    int size;

    MyClass(int size) {
        this->size = size;
        this->data = new int[this->size];

        cout << "init constructor" << endl;
        for (int i = 0; i < this->size; i++) {
            this->data[i] = i;
        }

        for (int i = 0; i < this->size; i++) {
            cout << this->data[i] << " ";
        }
        cout << endl;
    }

    MyClass(const MyClass& other) {
        this->size = other.size;
        this->data = new int[this->size];

        cout << "copy contructor" << endl;

        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }

        for (int i = 0; i < this->size; i++) {
            cout << this->data[i] << " ";
        }
        cout << endl;
    }

    MyClass& operator = (const MyClass& other) {
        this->size = other.size;

        if (this->data != nullptr) {
            delete[]this->data;
        }

        this->data = new int[this->size];

        cout << "assignment contructor" << endl;
        for (int i = 0; i < this->size; i++) {
            this->data[i] = other.data[i];
        }

        for (int i = 0; i < this->size; i++) {
            cout << this->data[i] << " ";
        }

        return *this;
    }

    ~MyClass() {
        delete[] this->data;
        cout << "deconstructor" << endl;
    }
};

class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 0;
        y = 0;
        cout << this << "constructor" << "\n\n";
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
        cout << this << "constructor init" << "\n\n";
    }

    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void print() {
        cout << "X = " << this->x << ", Y = " << this->y << "\n\n";
    }

    bool operator == (const Point& other) {
        return this->x == other.x && this->y == other.y;
    }

    bool operator != (const Point& other) {
        return this->x != other.x || this->y != other.y;
    }
};

int main() {
    //MyClass a(10);
    //MyClass b(a);
    //MyClass c(20);

    //c = a;

    Point a(2, 3);
    a.print();

    Point b(1, 3);
    b.print();

    bool result1 = a == b;
    cout << result1 << endl;

    bool result2 = a != b;
    cout << result2 << endl;

    return 0;
}