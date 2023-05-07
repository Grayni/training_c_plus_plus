#include <iostream>
#include <string>
#include <list>

using namespace std;

template<typename T>
void printList(const list<T> &lst) {
    for (auto i = lst.cbegin(); i != lst.cend(); ++i) {
        cout << *i << endl;
    }
}

int main() {
    list<int> myList = {1, 2, 3};

    myList.push_back(5);
    myList.push_front(10);

    list<int>::iterator iter = myList.begin();
    // auto iter = myList.begin();

    for (auto i = myList.begin(); i != myList.end(); i++) {
        cout << *i << endl;
    }

    myList.sort();

    cout << "\n\n";

    printList(myList);

    cout << "\n" << myList.size() << endl;

    list<int> myList2 = {99, 1, 4, 3, 99, 99, 99};
    myList2.unique();

    cout << "\n" << endl;
    printList(myList2);

    myList2.reverse();
    cout << "\n" << endl;
    printList(myList2);

    myList.clear();
    cout << "\n" << endl;
    cout << "empty myList: ";
    printList(myList);
    cout << " ;";

    cout << endl;
    auto iter2 = myList2.begin();
    ++iter2; // index 1
    myList2.insert(iter2, 111);
    printList(myList2);

    cout << endl;
    advance(iter2, 2); // iter+2 
    myList2.insert(iter2, 112);
    printList(myList2);

    cout << endl;
    myList2.erase(iter2); // delete next element
    printList(myList2);

    cout << endl;
    myList2.remove(99);
    printList(myList2);

    cout << endl;
    myList2.assign(3, 3232);
    printList(myList2);

    cout << endl;
    myList = {12, 123, 3, 2, 1};
    myList2 = {54, 65, 12};

    myList.assign(myList2.begin(), myList2.end()); // copy another list
    printList(myList);

    return 0;
}