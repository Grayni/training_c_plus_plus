#include <iostream>
#include <typeinfo>

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
        cout << "init constructor" << "\n\n";
    }

    Point operator + (const Point& other) {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;

        return temp;
    }

    void result(string name) {
        cout << name << "(" << this->x << ", " << this->y << ")" << endl;
    }



};

int main() {
    Point a(1, 2);
    a.result("A");

    Point b(2, 5);
    b.result("B");

    Point c = a + b;
    c.result("C");
    a.result("A");
    return 0;
}