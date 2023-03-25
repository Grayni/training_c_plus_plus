#include <iostream>
using namespace std;

class Human {
public:
    int age;
    int weight;
    string name;

    void print() {
        cout << "Name: " << name << "\t" << "Weight: " << weight << "\t" << "Age: " << age << endl;

    }
};

int main() {
    Human earthman;
    earthman.age = 31;
    earthman.weight = 82;
    earthman.name = "George";

    earthman.print();

    Human martian;
    martian.print();

    system("pause");
    return 0;
}