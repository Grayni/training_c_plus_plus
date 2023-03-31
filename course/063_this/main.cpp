#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 0;
        y = 0;
        cout << this << "\n\n";
    }

    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
        cout << this << "\n\n";

    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void setX(int valueX) {
        x = valueX;
    }

    void setY(int y) {
        this->y = y;
    }

    void print() {
        cout << "X = " << x << ", Y = " << y << "\n\n";
    }
};

int main() {
    Point A;
    A.print();

    A.setY(10);
    A.print();

    Point B(4, 3);
    B.print();

    Point C;
    C.setX(7);
    C.setY(9);
    C.print();

    system("pause");
    return 0;
}