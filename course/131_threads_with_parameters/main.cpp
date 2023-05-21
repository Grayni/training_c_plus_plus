#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void DoWork(int a, int b) {
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "======\tDoWork Started\t======" << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "a+b = " << a + b << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "======\tDoWork Stopped\t======" << endl;
}

int main() {
    thread th(DoWork, 2, 3);

    for (size_t i = 0; true; i++) {
        cout << "ID thread = " << this_thread::get_id() << "\tmain works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th.join();

    return 0;
}