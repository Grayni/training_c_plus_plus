#include <iostream>
using namespace std;

class Point3D;

class Point {
private:
    int x;
    int y;

    friend void changeX(Point& value, Point3D& value3D);

public:
    Point() {
        this->x = 0;
        this->y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int getX() {
        return this->x;
    }

    int getY() {
        return this->y;
    }

    //void setX(int x) {
    //    this->x = x;
    //}

    //void setY(int y) {
    //    this->y = y;
    //}

    void print(char name) {
        cout << name << ": X = " << this->x << ", Y = " << this->y << "\n\n";
    }
};

class Point3D {
private:
    int x;
    int y;
    int z;
    friend void changeX(Point& value, Point3D& value3D);
public:
    Point3D(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void print(char name) {
        cout << name << ": X = " << this->x << ", Y = " << this->y << ", Z = " << this->z << "\n\n";
    }
};

void changeX(Point& value, Point3D& value3D) {
    value.x = -1;
    value3D.x = -10;
}

int main() {
    Point a(1, 4);
    a.print('A');

    Point3D b(4, 3, 2);
    b.print('B');

    changeX(a, b);
    a.print('A');
    b.print('B');

    return 0;
}