#include <iostream>
using namespace std;

class Apple {
public:
    static int count;

    Apple(double weight, string color) {
        this->weight = weight;
        this->color = color;
        this->count++;
    }

    void changeCount(int count) {
        this->count = count;
    }

private:
    double weight;
    string color;
};

int Apple::count = 0;

int main() {
    Apple sort_1(0.2, "green");
    cout << sort_1.count << endl;

    Apple sort_2(0.25, "red");
    cout << sort_1.count << endl;
    cout << sort_2.count << endl;
    cout << Apple::count << endl;

    return 0;
}