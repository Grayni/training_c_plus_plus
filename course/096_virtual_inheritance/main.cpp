#include <iostream>
using namespace std;

// computer

class Component {
public:
    Component(string companyName) {
        cout << "constructor Component" << endl;
        this->componentName = componentName;
    }
    string componentName;
};

class GPU: public Component {
public:
    GPU(string companyName): Component(companyName) {
        cout << "constructor GPU" << endl;
    }
};

class Memory: public Component {
public:
    Memory(string companyName): Component(companyName) {
        cout << "constructor Memory" << endl;
    }
};

class GraphicCard: public GPU, public Memory {
public:
    GraphicCard(string GPUCompanyName, string MemoryCompanyName): GPU(GPUCompanyName), Memory(MemoryCompanyName) {
        cout << "constructor GraphicCard" << endl;
    }
};


// Fantasy
class Character {
public:
    Character() {
        cout << "contructor Character" << endl;
    }
    int HP;
};

class Orc: public virtual Character {
public:
    Orc() {
        cout << "contructor Orc" << endl;
        HP = 100;
        cout << "HP: " << HP << endl;
    }
};

class Warrior: public virtual Character {
public:
    Warrior() {
        cout << "contructor Warrior" << endl;
        HP = 150;
        cout << "HP: " << HP << endl;
    }
};

class OrcWarrior: public Orc, public Warrior {
public:
    OrcWarrior() {
        cout << "contructor OrcWarrior" << endl;
        HP = 350;
        cout << "HP: " << HP << endl;
    }
};

int main() {
    GraphicCard gc("Nvidia", "Samsung");
    cout << endl;
    OrcWarrior ow;

    return 0;
}