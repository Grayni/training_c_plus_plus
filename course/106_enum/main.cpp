#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class PC {
public:
    enum PCState {
        OFF,
        ON,
        SLEEP
    };

    PCState getState() {
        return this->state;
    }

    void setState(PCState state) {
        this->state = state;
    }

private:
    PCState state;
};

enum Speed {
    MIN = 150,
    RECOMEND = 600,
    MAX = 800
};

int main() {
    PC pc;
    pc.setState(PC::PCState::ON);

    //if (pc.getState() == PC::PCState::ON) {
    //    cout << "PC ON" << endl;
    //}

    switch (pc.getState()) {
        case PC::PCState::ON:
            cout << "PC ON" << endl;
            break;
        case PC::PCState::OFF:
            cout << "PC OFF" << endl;
            break;
        case PC::PCState::SLEEP:
            cout << "PC SLEEP" << endl;
            break;
    }

    Speed sp = Speed::MAX;

    cout << sp << endl;


    return 0;
}