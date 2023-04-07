#include <iostream>
#include <string>
using namespace std;

class Pixel {
private:
    int r;
    int g;
    int b;

public:
    Pixel() {
        this->r = this->g = this->b = 0;
    }

    Pixel(int r, int g, int b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }

    string getInfo() {
        return "Pixel: r = " + to_string(r) + ", g = " + to_string(g) + ", b = " + to_string(b);
    }
};

int main() {
    const int LENGTH = 5;

    // static array
    Pixel arr1[LENGTH];

    cout << arr1[0].getInfo() << endl;

    arr1[0] = Pixel(25, 12, 44);

    cout << arr1[0].getInfo() << endl;

    // dinamic array

    Pixel* arr2 = new Pixel[LENGTH];
    arr2[0] = Pixel(22, 15, 33);
    cout << arr2[0].getInfo() << endl;


    delete[] arr2;

    return 0;
}