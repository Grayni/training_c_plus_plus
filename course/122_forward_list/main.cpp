#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> fl = {1, 2, 3, 4, 5};

    fl.push_front(20);
    fl.push_front(30);
    fl.push_front(40);

    // for each
    for (auto element : fl) {
        cout << element << endl;
    }

    cout << "\n\n";

    // iterator
    forward_list<int>::iterator it = fl.begin();

    cout << *it << endl;

    it++;
    cout << "\nremember the element: " << endl;

    cout << *it << "\n\n"; // 30 [index 1]

    // it--; // error
    cout << "insert 50 [index 2] after 30 [index 1]: \n";

    fl.insert_after(it, 50);
    for (auto el : fl) {
        cout << el << endl;
    }

    cout << "\n\n";
    // iterator not make step
    cout << "delete 50 [index 2] after 30 [index 1]: \n";

    fl.erase_after(it);
    for (auto el : fl) {
        cout << el << endl;
    }

    cout << "\n\n";
    // insert at the beginning of the collection
    cout << "insert [index 0]: \n";

    it = fl.before_begin();
    fl.insert_after(it, 60);
    for (auto el : fl) {
        cout << el << endl;
    }


    return 0;
}