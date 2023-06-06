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

template<typename T>
void showResult(T result, T value) {
    if (result == value) {
        cout << "not found" << endl;
    }
    else {
        cout << "find value" << endl;
    }
}

int main() {

    vector<Person> people {
        Person("Alex", 181, 27),
        Person("Liza", 30, 34),
        Person("Bart", 200, 23),
        Person("Victor", 121, 26),
        Person("Sten", 50, 20),
        Person("Inga", 151, 33)
    };

    vector<Person> result;

    copy(people.begin(), people.end(), back_inserter(result));

    for (auto element : result) {
        cout << "Name: " << element.Name << ", Score: " << element.Score << endl;
    }

    cout << endl;

    cout << "All elements people: " << people.size() << endl;

    vector<Person> copy_selection;


    copy_if(people.begin(), people.end(), back_inserter(copy_selection), [](const Person &p) {
        return p.Score < 150 && p.Age > 25;
    });

    cout << endl;

    for (auto element : copy_selection) {
        cout << "Name: " << element.Name << ", Score: " << element.Score << ", Age: " << element.Age << endl;
    }

    cout << endl;

    sort(copy_selection.begin(), copy_selection.end(), [](Person &p1, Person &p2) {
        return p1.Score < p2.Score;
    });

    for (auto element : copy_selection) {
        cout << "Name: " << element.Name << ", Score: " << element.Score << ", Age: " << element.Age << endl;
    }

    return 0;
}