#include <iostream>

using namespace std;

union MyUnion {
    short int a;
    int b;
    float c;
};

int main() {
    MyUnion u;

    u.a = 5;
    u.b = 10;
    u.c = 32.32;

    cout << u.a << endl; // garbage
    cout << u.b << endl; // garbage
    cout << u.c << endl; // 32.32

    return 0;
}