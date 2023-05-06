#include <iostream>
#include <vector>

using namespace std;

int main() {

    auto a = 10; // int
    auto b = 1.22; // double
    auto c = "string"; // string
    auto d = true; // bool

    vector<int> myVector = {11, 22, 22};
    vector<int>::iterator it = myVector.begin();

    auto it2 = myVector.begin(); // auto <=> vector<int>::iterator

    for (auto it = myVector.begin(); it != myVector.end(); it++) {
        cout << *it << endl;
    }


    return 0;
}