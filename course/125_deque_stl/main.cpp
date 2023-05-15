#include <iostream>
#include <deque>

using namespace std;

void show(deque<int> dq) {
    for (auto el : dq) {
        cout << el << " ";
    }
    cout << "\n";
}

int main() {

    deque<int> dq = {1, 4, 6};

    dq.push_back(4);
    show(dq);

    dq.push_front(5);
    show(dq);

    auto iter = dq.begin();
    iter++;

    dq.insert(iter, 33);
    show(dq);

    auto first = dq.begin() + 1;
    auto last = dq.begin() + 3;
    dq.erase(first, last);
    show(dq);

    dq.clear();
    cout << "empty deque: ";
    show(dq);
    cout << ";";

    return 0;
}