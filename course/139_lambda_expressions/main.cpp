#include <iostream>
#include <thread>

using namespace std;

int sum(int a, int b) {
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "ID = " << this_thread::get_id() << "\t Sum started" << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "ID = " << this_thread::get_id() << "\t Sum stopped" << endl;

    return a + b;
}

int main() {

    int result;

    auto f = [&result]() {result = sum(2, 5); };
    thread t(f);

    for (size_t i = 1; i <= 10; i++) {
        cout << "ID = " << this_thread::get_id() << "\t main works\t" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    t.join();

    cout << "Sum result: " << result << endl;
    return 0;
}