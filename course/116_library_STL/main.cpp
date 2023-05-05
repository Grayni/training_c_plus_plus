#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector;

    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(2);

    myVector[0] = 8;

    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << endl;
    }

    cout << "\n\n myVector.at()" << "\n";

    try {
        myVector.at(10) = 22; // minus: works slower
    }
    catch (const std::out_of_range & ex) {
        cout << ex.what() << endl;
    }

    cout << "\n\n myVector.pop_back()" << "\n";
    myVector.pop_back();

    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << endl;
    }

    cout << "\n\n myVector.clear()" << "\n";
    myVector.clear();

    cout << myVector.size() << endl;

    cout << "\n\n myVector2 \"{}\"" << "\n";
    vector<int> myVector2 = {2, 3, 1, 3};

    for (int i = 0; i < myVector2.size(); i++) {
        cout << myVector2[i] << endl;
    }

    myVector2.push_back(23);
    cout << "\n\nmyVector2.size(): " << myVector2.size() << endl;
    cout << "myVector2.capacity(): " << myVector2.capacity() << endl; // size with reserve empty cells

    myVector2.reserve(100);
    cout << "myVector2.reserve(100) -> myVector2.capacity(): " << myVector2.capacity() << endl;

    myVector2.shrink_to_fit(); // deleting all empty cells
    cout << "myVector2.shrink_to_fit() -> myVector2.capacity(): " << myVector2.capacity() << endl;

    vector<int> myVector3(3, 11);
    cout << "myVector3(20): " << myVector3.capacity() << endl;

    for (int i = 0; i < myVector3.size(); i++) {
        cout << myVector3[i] << endl;
    }

    cout << "myVector3.empty(): " << myVector3.empty() << endl; // return 1 if vector empty else 0

    myVector3.resize(5, 111);
    cout << "myVector3.resize(10) -> myVector3.capacity(): " << myVector3.capacity() << endl;

    for (int i = 0; i < myVector3.size(); i++) {
        cout << myVector3[i] << endl;
    }


    return 0;
}