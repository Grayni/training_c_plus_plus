#include <iostream>
#include <string>
using namespace std;

class Image {
public:
    void getImageInfo() {
        for (int i = 0; i < LENGTH; i++) {
            cout << pixels[i].printInfo() << endl;
        }
    }
private:

    class Pixel {
    public:
        Pixel(int r, int g, int b) {
            this->r = r;
            this->g = g;
            this->b = b;
        }

        string printInfo() {
            return "Pixel: r=" + to_string(r) + ", g=" + to_string(g) + ", b=" + to_string(b);
        }
    private:
        int r;
        int g;
        int b;
    };

    static const int LENGTH = 5;
    Pixel pixels[LENGTH] {
        Pixel(0, 4, 64),
        Pixel(4, 14, 10),
        Pixel(111, 4, 24),
        Pixel(255, 24, 44),
        Pixel(21, 155, 0)
    };
};

int main() {
    Image img;

    img.getImageInfo();

    return 0;
}