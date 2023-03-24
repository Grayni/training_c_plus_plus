#include <iostream>
using namespace std;

class Human {
public:
    int age;
    int weight;
    string name;
};

class Point {
public:
    int x;
    int y;
    int z;
};

int main() {
    Human Earthman;

    Earthman.age = 30;
    Earthman.weight = 80;
    Earthman.name = "Alex";

    cout << "Age: " << Earthman.age << endl;
    cout << "Weight: " << Earthman.weight << endl;
    cout << "Name: " << Earthman.name << endl;

    cout << endl;

    Human Martian;

    Martian.age = 31;
    Martian.weight = 82;
    Martian.name = "George";

    cout << "Age: " << Martian.age << endl;
    cout << "Weight: " << Martian.weight << endl;
    cout << "Name: " << Martian.name << endl;

    cout << "\n\n";

    Point a;

    a.x = 1;
    a.y = 5;
    a.z = 10;

    cout << "x: " << a.x << endl;
    cout << "y: " << a.y << endl;
    cout << "z: " << a.z << endl;

    return 0;
}