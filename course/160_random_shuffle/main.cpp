#include <iostream>
#include <algorithm>

using namespace std;

class IAction {
public:
    virtual void Action() = 0;
};

class CatAction: public IAction {
    virtual void Action() override {
        cout << "feed the cat" << endl;
    }
};

class TeaAction: public IAction {
    virtual void Action() override {
        cout << "drinking tea" << endl;
    }
};


class DogAction: public IAction {
    virtual void Action() override {
        cout << "walking with the dog" << endl;
    }
};


class SleepAction: public IAction {
    virtual void Action() override {
        cout << "sleep in bed" << endl;
    }
};


int main() {

    int arr[] = {1, 2, 3, 4, 5};

    for (auto el : arr) {
        cout << el << " ";
    }


    srand(time(NULL));

    random_shuffle(begin(arr), end(arr));

    cout << endl;

    for (auto el : arr) {
        cout << el << " ";
    }

    IAction* actions[] = {
        new CatAction(),
        new TeaAction(),
        new DogAction(),
        new SleepAction()
    };

    cout << "\n\n";

    random_shuffle(begin(actions), end(actions));

    for (auto el : actions) {
        el->Action();
    }

    return 0;
}