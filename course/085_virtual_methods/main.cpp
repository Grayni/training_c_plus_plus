#include <iostream>
using namespace std;

class Gun {
public:
    virtual void shoot() {
        cout << "Bang!!!" << endl;
    }
};

class SubmachineGun: public Gun {
public:
    void shoot() override {
        cout << "Bang! Bang! Bang!" << endl;
    }
};

class Bazooka: public Gun {
public:
    void shoot() override {
        cout << "BadaBoom!" << endl;
    }
};

class Player {
public:
    void shoot(Gun* gun) {
        gun->shoot();
    }
};

int main() {
    Gun gun;
    //gun.shoot();

    SubmachineGun sg;
    //sg.shoot();

    Bazooka bz;

    //Gun* weapon = &sg;
    //weapon->shoot();

    Player gamer_1;
    gamer_1.shoot(&sg);

    Player gamer_2;
    gamer_2.shoot(&bz);

    return 0;
}