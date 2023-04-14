#include <iostream>
using namespace std;

class Human {
public:
    Human(string name) {
        this->name = name;
        this->age = 0;
        this->weight = 0;
    }

    Human(string name, int age):Human(name) {
        this->age = age;
    }

    Human(string name, int age, int weight):Human(name, age) {
        this->weight = weight;
    }


    string name;
    int age;
    int weight;
};

int main() {
    Human man("Robert");
    Human woman("Liza", 25);

    cout << man.name << endl;
    cout << woman.name << ", " << woman.age << endl;

    return 0;
}