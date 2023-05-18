#include <iostream>
#include <thread>
#include <chrono>

using namespace std;


void DoWork() {
    for (size_t i=0; i < 5; i++) {
        cout << "ID thread = " << this_thread::get_id() << "\tDoWork\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
}


int main() {

    //cout << "Start main" << endl;
    //this_thread::sleep_for(chrono::milliseconds(1000));

    //cout << this_thread::get_id() << endl;

    //cout << "End main" << endl;

    thread th1(DoWork);
    thread th2(DoWork);
    //th.detach();

    for (size_t i=0; i < 5; i++) {
        cout << "ID thread = " << this_thread::get_id() << "\tmain \t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    th1.join();
    th2.join();

    return 0;
}