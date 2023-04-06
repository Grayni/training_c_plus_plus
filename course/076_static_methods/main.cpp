#include <iostream>
using namespace std;

class Apple {
private:
    int id;
    double weight;
    string color;
    static int count;

public:
    Apple(double weight, string color) {
        this->weight = weight;
        this->color = color;
        count++;
        this->id = count;
    }

    static int getCount() {
        return count;
    }

    static void changeColor(Apple& apple, string color) {
        apple.color = color;
    }

    string getColor() {
        return color;
    }

    void print() {
        cout << "weight: " << this->weight << ", color: " << this->color << ", id: " << this->id << endl;
    }
};

int Apple::count;

int main() {
    Apple sort_1(0.2, "red");
    Apple sort_2(0.3, "green");
    sort_1.print();
    sort_2.print();

    cout << Apple::getCount() << endl;

    sort_1.changeColor(sort_1, "yellow");
    cout << "color sort_1: " << sort_1.getColor() << endl;
    cout << "color sort_2: " << sort_2.getColor() << endl;
    return 0;
}