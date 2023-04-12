#include <iostream>
using namespace std;

class Weapon {
public:
    virtual void use() = 0;

    void foo() {
        cout << "foo" << endl;
    }
};


class Gun: public Weapon {
public:
    void use() override {
        cout << "Bang!" << endl;
    }
};

class SubmachineGun: public Gun {
public:
    void use() override {
        cout << "Bang! Bang! Bang!" << endl;
    }
};

class Bazooka: public Weapon {
public:
    void use() override {
        cout << "BadaBoom!" << endl;
    }
};

class Knife: public Weapon {
public:
    void use() override {
        cout << "Vjuh!" << endl;
    }
};

class Player {
public:
    void use(Weapon* weapon) {
        weapon->use();
    }
};


int main() {
    Gun gun;
    SubmachineGun sg;
    Bazooka bazooka;
    Knife knife;


    Player gamer_1;
    gamer_1.use(&gun);

    Player gamer_2;
    gamer_2.use(&sg);

    Player gamer_3;
    gamer_3.use(&bazooka);

    Player gamer_4;
    gamer_4.use(&knife);

    knife.foo();

    return 0;
}