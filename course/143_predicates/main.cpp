#include <iostream>
#include <algorithm>
#include <vector>

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
        this->Name = Name;
        this->Score = score;
    }

    bool operator()(const Person &p) {
        return p.Score > 180;
    }

    string Name;
    double Score;
};

int main() {
    cout << GreaterThanZero(5) << endl;

    vector<int> v = {-10, 5, -2, 5, -1};

    int result1 = count_if(v.begin(), v.end(), GreaterThanZero);
    cout << result1 << endl;

    int result2 = count_if(v.begin(), v.end(), LessThanZero);
    cout << result1 << endl;

    vector<Person> people {
        Person("Alex", 181),
        Person("Liza", 30),
        Person("Bart", 200),
        Person("Victor", 121),
        Person("Sten", 50),
        Person("Inga", 151)
    };

    int result3 = count_if(people.begin(), people.end(), people.front());

    cout << result3 << endl;


    return 0;
}