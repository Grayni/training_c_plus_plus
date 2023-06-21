#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void Print(char ch) {
    unique_lock<mutex> ul(mtx, defer_lock);
    this_thread::sleep_for(chrono::milliseconds(2000));
    ul.lock();

    for (int i=0; i < 5; i++) {
        for (int i=0; i < 10; i++) {
            cout << ch;
            this_thread::sleep_for(chrono::milliseconds(10));
        }
        cout << endl;
    }
    cout << endl;

}

int main() {

    thread t1(Print, '*');
    thread t2(Print, '#');

    t1.join();
    t2.join();

    return 0;
}