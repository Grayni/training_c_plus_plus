#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    int getX() {
        return x;
    }

    void setX(int valueX) {
        x = valueX;
    }

    int getY() {
        return y;
    }

    void setY(int valueY) {
        y = valueY;
    }

    void print() {
        cout << "X = " << x << "\t" << "Y = " << y << endl << endl;
    }

};

int main() {

    Point a;
    a.print();

    a.setX(10);
    a.setY(20);
    a.print();

    cout << a.getX() << endl;


    system("pause");
}