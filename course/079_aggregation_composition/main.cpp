#include <iostream>
using namespace std;

// composition (class in class)
// aggregation (class outside of class)


class Cap {
public:
    string getColor() {
        return this->color;
    }

private:
    string color = "red";

};

class Human {
public:
    void think() {
        brain.think();
    }

    void inspectTheCap() {
        cout << cap.getColor() << endl;
    }

private:
    class Brain {
    public:
        void think() {
            cout << "I think.." << endl;
        }
    };

    Brain brain;
    Cap cap;
};

class Model {
public:
    void inspectModel() {
        cout << cap.getColor() << endl;
    }

private:
    Cap cap;
};

int main() {
    Human human;
    human.think();
    human.inspectTheCap();

    Model model;
    model.inspectModel();

    return 0;
}