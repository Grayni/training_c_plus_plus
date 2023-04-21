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
        cout << "X: " + to_string(x) + "\tY: " + to_string(y) + "\tZ: " + to_string(z) << endl;
    }

    int x;
    int y;
    int z;
};

int main() {
    string path = "my_file.txt";

    //Point a(12, 10, 43);
    //a.print();

    //cout << "\n\n";

    //// get file
    //ofstream fout;
    //fout.open(path, ofstream::app);

    //if (!fout.is_open()) {
    //    cout << "error" << endl;
    //}
    //else {
    //    cout << "success" << endl;
    //    fout.write((char*)&a, sizeof(Point));
    //}

    //fout.close();

    ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        cout << "error" << endl;
    }
    else {
        cout << "success" << endl;
        Point pnt;

        while (fin.read((char*)&pnt, sizeof(Point))) {
            pnt.print();
        }
    }

    fin.close();


    return 0;
}