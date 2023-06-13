#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

mutex mtx;

class SimpleTimer {
public:
    SimpleTimer() {
        start = std::chrono::high_resolution_clock::now();
    }
    ~SimpleTimer() {
        end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<float> duration = end - start;
        cout << "Duration: " << duration.count() << "s" << endl;
    }
private:
    std::chrono::time_point<std::chrono::steady_clock> start, end;
};

void Print(char ch) {
    this_thread::sleep_for(chrono::milliseconds(1000));

    mtx.lock();

    for (int i=0; i < 5; i++) {
        for (int i=0; i < 10; i++) {
            cout << ch;
            this_thread::sleep_for(chrono::milliseconds(20));
        }
        cout << endl;
    }
    cout << endl;

    mtx.unlock();

    this_thread::sleep_for(chrono::milliseconds(1000));
}

int main() {
    SimpleTimer timer;

    thread t1(Print, '*');
    thread t2(Print, '#');
    thread t3(Print, '@');

    t1.join();
    t2.join();
    t3.join();

    return 0;
}