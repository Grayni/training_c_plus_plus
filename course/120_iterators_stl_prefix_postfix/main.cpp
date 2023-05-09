#include <iostream>
#include <list>

using namespace std;

template<typename T>
void printList(const list<T> &lst) {
    for (auto i = lst.cbegin(); i != lst.cend(); i++) {
        cout << *i << endl;
    }
}

int main() {
    int i = 5;
    cout << i++ << endl; // 5

    cout << i << endl; // 6

    cout << ++i << endl; // 7


    list<int>::iterator it;

    it++; // slow realization

    ++it;

    return 0;
}