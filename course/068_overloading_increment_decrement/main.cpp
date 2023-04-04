#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {
        this->x = 0;
        this->y = 0;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    Point& operator ++ () {
        this->x += 1;
        this->y += 1;
        return *this;
    }

    Point& operator ++ (int value) {
        Point temp(*this);

        return temp;
    }

    Point& operator -- () {
        this->x -= 1;
        this->y -= 1;

        return *this;
    }

    Point& operator -- (int value) {
        Point temp(*this);

        return temp;
    }

    void print() {
        cout << "X = " << this->x << ", Y = " << this->y << "\n\n";
    }

};

int main() {
    Point a(1, 5);
    Point b = a;

    b.print();
    b = ++a;
    b.print();
    b = a++;
    b.print();
    b = --a;
    b.print();
    b = a--;
    b.print();

    return 0;
}