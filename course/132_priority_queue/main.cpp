#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(3);
    q.push(32);
    q.push(41);
    q.push(64);
    q.push(86);

    cout << "q.front(): " << q.front() << "\n\n"; // 3

    auto a = q._Get_container();

    for (int i = 0; i < q.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n\n";

    while (!q.empty()) {
        cout << "value: " << q.front();
        q.pop();
        cout << ", elments count: " << q.size() << endl;
    }

    cout << "elments count: " << q.size() << "\n\n";


    queue<int, list<int>> l; // list or deque, --not vector--

    priority_queue<int> p;

    p.push(55);
    p.push(64);
    p.push(15);
    p.push(99);
    p.push(10);

    cout << p.top() << "\n\n"; // 99 biggest value

    while (!p.empty()) {
        cout << p.top() << endl;
        p.pop();
    }

    cout << endl;

    return 0;
}