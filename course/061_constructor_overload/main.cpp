#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
    int z;
public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }

    Point(int valueX, int valueY, int valueZ) {
        x = valueX;
        y = valueY;
        z = valueZ;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    int getZ() {
        return z;
    }

    void print() {
        cout << "X = " << getX() << "\tY = " << getY() << endl;
    }
};

int main() {
    Point coordsA;

    cout << "coordinates A:\n";

    cout << "X = " << coordsA.getX() << endl;
    cout << "Y = " << coordsA.getY() << endl;
    coordsA.print();


    Point coordsB(55, 44);
    cout << "\ncoordinates B:\n";

    cout << "X = " << coordsB.getX() << endl;
    cout << "Y = " << coordsB.getY() << endl;
    coordsB.print();

    Point coordsC(22, 21, 11);
    cout << "\ncoordinates C:\n";

    cout << "X = " << coordsC.getX() << endl;
    cout << "Y = " << coordsC.getY() << endl;
    cout << "Z = " << coordsC.getZ() << endl;


    system("pause");
    return 0;
}