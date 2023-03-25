#include <iostream>
using namespace std;

class Point {
private:
    int l = 10;
    void printY() {
        cout << l << endl;
    }

public:
    int x;
    int y;

    void print() {
        cout << l << endl;
        cout << z << endl;
        printY();
    }

protected:
    int z;
};

int main() {
    Point a;
    a.x;
    a.print();


}