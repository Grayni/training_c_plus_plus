#include <iostream>
using namespace std;

class Apple;

class Human {
public:
    void takeApple(Apple& object);
};

class Apple {
    friend Human;

private:
    double weight;
    string color;

public:
    Apple(double weight, string color) {
        this->weight = weight;
        this->color = color;
    }

};

void Human::takeApple(Apple& object) {
    cout << "Man eat apple weighing: " << object.weight << "kg" << endl;
}

int main() {
    Apple apple(0.2, "green");
    Human man;
    man.takeApple(apple);

    return 0;
}