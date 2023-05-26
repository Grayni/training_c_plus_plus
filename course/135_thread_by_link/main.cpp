#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void DoWork(int &a) {
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "ID: " << this_thread::get_id() << "\tDoWork started" << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));

    a *= 2;

    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "ID: " << this_thread::get_id() << "\tDoWork stopped" << endl;
}

int main() {
    int q = 5;

    thread t(DoWork, std::ref(q));

    for (size_t i = 0; i < 10; i++) {
        cout << "ID: " << this_thread::get_id() << "\tmain works\t" << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    t.join();


    return 0;
}