#include <iostream>
using namespace std;

class User {
private:
    static int count;
    int ID;

public:
    User() {
        this->ID = ++this->count;
    }

    void print() {
        cout << "user_" << this->ID << ": id = " << this->ID << "\n";
    }

};

int User::count;

int main() {
    User user_1;
    user_1.print();
    cout << endl;

    User user_2;
    user_1.print();
    user_2.print();
    cout << endl;

    User user_3;
    user_1.print();
    user_2.print();
    user_3.print();

    return 0;
}