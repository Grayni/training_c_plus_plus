#include <iostream>
#include <string>
#include <fstream>

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

    void print() {
        cout << "X: " << x << "\tY: " << y << "\tZ: " << z << endl;
    }

private:
    int x;
    int y;
    int z;

    friend ostream& operator << (ostream& os, const Point& point);
    friend istream& operator >> (istream& is, Point& point);

};

ostream& operator << (ostream& os, const Point& point) {
    os << point.x << " " << point.y << " " << point.z;

    return os;
}

istream& operator >> (istream& is, Point& point) {
    is >> point.x >> point.y >> point.z;

    return is;
}

int main() {
    Point point(22, 212, 3313);

    fstream fs;

    string path = "my_file.txt";

    fs.open(path, fstream::in | fstream::out | fstream::app);

    if (!fs.is_open()) {
        cout << "error" << endl;
    }
    else {
        cout << "success" << endl;
        //fs << point << "\n";

        while (1) {
            Point p;

            fs >> p;

            if (fs.eof()) {
                break;
            }

            cout << p << endl;
        }
    }

    fs.close();


    return 0;
}