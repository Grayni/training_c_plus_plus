#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }

    int getX() {
        return x;
    }

    void setX(int newX) {
        x = newX;
    }

    int getY() {
        return y;
    }

    void setY(int newY) {
        y = newY;
    }
};

int main() {
    Point coords(50, 100);

    cout << coords.getX() << endl;
    cout << coords.getY() << endl;

    coords.setX(10);
    coords.setY(20);

    cout << coords.getX() << endl;
    cout << coords.getY() << endl;

    return 0;
}