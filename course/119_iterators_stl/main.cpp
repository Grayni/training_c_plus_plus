#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector = {332, 23, 12, 48, 65};
    vector<int>::iterator it;

    it = myVector.begin();

    *it = 1000;

    cout << *it << endl;

    it++;

    cout << *it << endl;

    it += 2;

    cout << *it << "\n\n";

    for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++) {
        cout << *i << endl;
    }

    cout << endl;

    for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++) {
        // *i = 100; error
        cout << *i << endl;
    }

    cout << endl;
    for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++) {
        cout << *i << endl;
    }

    cout << endl;
    it = myVector.begin();
    advance(it, 3);
    cout << *it << endl;

    cout << endl;
    myVector.insert(it, 900);
    for (it = myVector.begin(); it != myVector.end(); it++) {
        cout << *it << endl;
    }

    cout << endl;
    vector<int>::iterator itEr = myVector.begin();
    myVector.erase(itEr);

    for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++) {
        cout << *i << endl;
    }

    cout << endl;
    itEr = myVector.begin();
    myVector.erase(itEr, itEr + 3);

    for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}