#include <iostream>
using namespace std;

class Message {
public:
    Message(string msg) {
        this->msg = msg;
    }

    virtual string getMsg() {
        return this->msg;
    }

private:
    string msg;
};

class Printer {
public:
    void print(Message* msg) {
        cout << msg->getMsg() << endl;
    }
};

class BraketMessage: public Message {
public:
    BraketMessage(string msg):Message(msg) {
    }

    string getMsg() override {
        return "[" + Message::getMsg() + "]";
    }
};

int main() {
    Message m("Hello");
    cout << m.getMsg() << endl;

    Printer p;
    p.print(&m);

    BraketMessage bm("Hi");
    cout << bm.getMsg() << endl;

    return 0;
}