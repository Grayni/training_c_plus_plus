#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool GreaterThanZero(int a) {
    return a > 0;
}

bool LessThanZero(int a) {
    return a < 0;
}

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

//bool MyPred(int a, int b) {
//    return a > b;
//}

int main() {

    vector<int> numbs = {5, 4, 5, 1, 3, 7};

    sort(numbs.begin(), numbs.end());

    for (int num : numbs) {
        cout << num << endl;
    }

    cout << endl;

    sort(numbs.begin(), numbs.end(), [](int a, int b) {
        return a > b;
    }); // reverse sort

    for (int num : numbs) {
        cout << num << endl;
    }

    cout << endl;

    const int SIZE = 5;

    int arr[SIZE] = {2, 6, 4, 3, 1};

    sort(arr, arr + SIZE);

    for (int num : arr) {
        cout << num << endl;
    }

    cout << endl;

    vector<Person> people {
        Person("Alex", 181),
        Person("Liza", 30),
        Person("Bart", 200),
        Person("Victor", 121),
        Person("Sten", 50),
        Person("Inga", 151)
    };

    for (auto person : people) {
        cout << "Name: " << person.Name << ", Score: " << person.Score << endl;
    }

    cout << endl;

    sort(people.begin(), people.end(), [](const Person &p1, const Person &p2) {
        return p2.Score > p1.Score;
    });

    for (auto person : people) {
        cout << "Name: " << person.Name << ", Score: " << person.Score << endl;
    }

    cout << endl;

    sort(people.begin(), people.end(), [](const Person &p1, const Person &p2) {
        return p2.Name > p1.Name;
    });

    for (auto person : people) {
        cout << "Name: " << person.Name << ", Score: " << person.Score << endl;
    }

    return 0;
}