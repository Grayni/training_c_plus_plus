#include <iostream>
using namespace std;

class Human {
private:
    string name;
public:
    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return this->name;
    }

};

class Student: public Human {
public:
    string group;

    void learn() {
        cout << "I learn!" << endl;
    }
};

class Professor: public Human {
    string subject;
};

class ExtramuralStudent: public Student {
public:
    void learn() {
        cout << "I learn less often.." << endl;
    }
};

int main() {
    Student st;
    st.setName("Alex");

    Professor pr;
    pr.setName("Victor");

    cout << "Professor: " + pr.getName() + ", Student: " + st.getName() << endl;
    cout << "Student say: "; st.learn();


    ExtramuralStudent exSt;

    exSt.setName("George");

    cout << "Extramural student: " + exSt.getName() << endl;
    exSt.learn();

    cout << "Extramural student say: "; exSt.learn();


    return 0;
}