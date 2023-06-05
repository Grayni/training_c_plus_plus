#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    Person(string name, double score) {
        this->Name = name;
        this->Score = score;
    }

    bool operator()(const Person &p) {
        return p.Score > 180;
    }

    string Name;
    double Score;
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
    vector<int> v1 = {5, 3, 3, 6, 7, 2, 4};

    auto result1 = find(v1.begin(), v1.end(), 5);
    // cout << *result << endl;

    showResult(result1, v1.end()); // find value

    cout << endl;

    vector<int> v2 = {2, 4, 6, 8};

    auto result2 = find_if(v2.begin(), v2.end(), [](int a) {
        return a % 2 == 0;
    });

    showResult(result2, v2.end()); // find value

    cout << endl;

    auto result3 = find_if_not(v2.begin(), v2.end(), [](int a) {
        return a % 2 == 0;
    });

    showResult(result3, v2.end()); // not found

    cout << endl;

    vector<Person> people {
        Person("Alex", 181),
        Person("Liza", 30),
        Person("Bart", 200),
        Person("Victor", 121),
        Person("Sten", 50),
        Person("Inga", 151)
    };

    auto result4 = find_if(people.begin(), people.end(), [](const Person &p) {
        return p.Name == "Sten" && p.Score == 50;
    });

    showResult(result4, people.end()); // find value




    return 0;
}