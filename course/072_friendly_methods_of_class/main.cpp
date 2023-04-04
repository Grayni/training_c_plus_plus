#include <iostream>
using namespace std;

class Apple;

class Human {
public:
    void takeApple(Apple& object);
};

class Apple {
public:
    Apple(double weight, string color) {
        this->weight = weight;
        this->color = color;
    }

    void print() {
        cout << "Apple: weight - " << this->weight << ", color - " << this->color << "\n\n";
    }

private:
    double weight;
    string color;

    friend void Human::takeApple(Apple& object);
};

void Human::takeApple(Apple& object) {
    cout << "Man put on " << object.weight << "kg" << endl;
}

int main() {
    Apple apple(0.2, "red");
    apple.print();
    Human man;
    man.takeApple(apple);

    return 0;
}