#include <iostream>
#include <thread>

using namespace std;

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

int sum(int a, int b) {
    SimpleTimer st;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "ID = " << this_thread::get_id() << "\t Sum started" << endl;
    this_thread::sleep_for(chrono::milliseconds(5000));

    cout << "ID = " << this_thread::get_id() << "\t Sum stopped" << endl;

    return a + b;
}

int main() {
    SimpleTimer st;

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