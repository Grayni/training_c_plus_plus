#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    pair<int, string> p(1, "phone");

    cout << p.first << " ";
    cout << p.second << endl;

    map<int, string> myMap;

    myMap.insert(make_pair(1, "first"));
    myMap.insert(pair<int, string>(2, "second"));
    myMap.emplace(3, "third");
    myMap.emplace(22, "fourth");

    auto it = myMap.find(22);

    if (it != myMap.end()) {
        cout << it->second << endl;
    }
    else {
        cout << "not found" << endl;
    }

    auto res = myMap.emplace(22, "twenty second");

    cout << myMap[3] << endl;


    map<string, int> marks;
    marks.emplace("Maggie", 4);
    marks.emplace("Bart", 2);
    marks.emplace("Lisa", 5);

    cout << marks["Lisa"] << endl;

    marks["Homer"] = 3;
    cout << marks["Homer"] << endl;

    marks["Homer"] = 4;
    cout << marks["Homer"] << endl;

    try {
        marks.at("Alex") = 3;
    }
    catch (const std::exception&ex) {
        cout << ex.what() << endl;
    }

    marks.erase("Homer");
    cout << marks["Homer"] << endl; // 0

    multimap<string, int> marks2;

    marks2.emplace("Maggie", 4);
    marks2.emplace("Bart", 2);
    marks2.emplace("Lisa", 5);
    marks2.emplace("Lisa", 3);
    marks2.emplace("Lisa", 4);

    for (auto it = marks2.begin(); it != marks2.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}