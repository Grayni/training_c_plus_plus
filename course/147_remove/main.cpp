#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, double score, int age) {
        this->Name = name;
        this->Score = score;
        this->Age = age;
    }

    bool operator()(const Person &p) {
        return p.Score > 180;
    }

    string Name;
    double Score;
    int Age;;
};

int main() {

    vector<Person> people {
        Person("Alex", 181, 27),
        Person("Liza", 30, 34),
        Person("Bart", 200, 23),
        Person("Victor", 121, 26),
        Person("Sten", 50, 20),
        Person("Inga", 151, 33)
    };

    vector<int> v = {4, 6, 5, 2, 7, 6};

    auto result = remove(v.begin(), v.end(), 6);

    v.erase(result, v.end());

    for (auto element : v) {
        cout << element << " ";  // 4 5 2 7
    }

    cout << endl;

    auto selection = remove_if(people.begin(), people.end(), [](const Person &p) {
        return p.Score < 150;
    });

    people.erase(selection, people.end());

    // people.erase(remove_if(people.begin(), people.end(), [](const Person &p) {
    //     return p.Score < 150;
    // }), people.end());


    for (auto element : people) {
        cout << "Name: " << element.Name << ", Score: " << element.Score << endl;
    }

    cout << endl;

    string str = "some text with some spaces";
    cout << str << endl;  // some text with some spaces

    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << str << endl;  // sometextwithsomespaces

    return 0;
}