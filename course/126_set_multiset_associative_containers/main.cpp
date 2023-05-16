#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    // binary tree
    set<int> mySet;
    mySet.insert(3);
    mySet.insert(1);
    mySet.insert(12);
    mySet.insert(4);
    mySet.insert(-1);

    // will not be added to set
    mySet.insert(1);
    mySet.insert(1);
    mySet.insert(1);

    for (auto &item : mySet) {
        cout << item << " ";
    }
    cout << endl;

    auto it = mySet.find(12);
    // mySet.end(); if not found

    int value;

    cout << "print value: ";
    cin >> value;

    if (mySet.find(value) != mySet.end()) {
        cout << "successful search!" << endl;
    }
    else {
        cout << "not found!" << endl;
    }

    mySet = {8, 4, 5, 1, 2, 7};

    mySet.erase(4);
    mySet.insert(9); // filling in an empty cell

    cout << endl;

    for (auto &item : mySet) {
        cout << item << " ";
    }
    cout << "\n\n";

    multiset<int> myMulti = {2, 1, 5, 2, 5, 1};

    cout << "Multiset: ";
    for (auto &item : myMulti) {
        cout << item << " ";
    }
    cout << endl;

    auto it1 = myMulti.lower_bound(5); // first find 5

    if (it1 != myMulti.end()) {
        cout << "good!" << endl;
    }
    else {
        cout << "not found!" << endl;
    }

    auto it2 = myMulti.upper_bound(2); // next value before 2 -> 5
    cout << distance(myMulti.begin(), it2) << endl; // 4 elements < 5

    auto a = myMulti.equal_range(5);

    for (auto it = a.first; it != a.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;



    return 0;
}