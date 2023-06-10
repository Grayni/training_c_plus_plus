#include <iostream>
#include <thread>

using namespace std;

class MyClass {
public:
    void DoWork() {
        this_thread::sleep_for(chrono::milliseconds(2000));

        cout << "ID " << this_thread::get_id() << "\t===========DoWork Started=============\t" << endl;

        this_thread::sleep_for(chrono::milliseconds(5000));

        cout << "ID " << this_thread::get_id() << "\t===========DoWork Stopped=============\t" << endl;
    }

    void DoWork2(int a) {
        this_thread::sleep_for(chrono::milliseconds(2000));

        cout << "ID " << this_thread::get_id() << "\t===========DoWork2 Started=============\t" << endl;

        this_thread::sleep_for(chrono::milliseconds(5000));

        cout << "DoWork2 a: " << a << endl;

        cout << "ID " << this_thread::get_id() << "\t===========DoWork2 Stopped=============\t" << endl;
    }

    int Sum(int a, int b) {
        this_thread::sleep_for(chrono::milliseconds(2000));

        cout << "ID " << this_thread::get_id() << "\t=============Sum Started=============\t" << endl;

        this_thread::sleep_for(chrono::milliseconds(5000));

        cout << "ID " << this_thread::get_id() << "\t=============Sum Stopped=============\t" << endl;

        return a + b;
    }

};

int main() {
    int result;

    MyClass m;


    thread t([&]() {
        result = m.Sum(2, 5);
    });

    thread p(&MyClass::DoWork, m);

    thread l(&MyClass::DoWork2, m, 10);

    for (size_t i = 0; i < 10; i++) {
        cout << "ID " << this_thread::get_id() << "\tmain work\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }

    t.join();
    p.join();
    l.join();
    cout << "Result sum: " << result << endl;

    return 0;
}