#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
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

    vector<int> v = {5, 3, 1, 6, 5, 8};
    list<int> l = {5, 3, 1, 6, 5, 9};

    auto result_v = min_element(v.begin(), v.end());
    cout << *result_v << endl;  // 1

    auto result_l = min_element(l.begin(), l.end());
    cout << *result_l << endl;  // 1

    const int SIZE = 6;

    int arr[SIZE] = {1, 2930, 5, 2, 5, 0};

    auto result_arr = min_element(arr, arr + SIZE);
    cout << *result_arr << endl;  // 0


    // minmax_element
    auto result_v2 = minmax_element(v.begin(), v.end());
    cout << *result_v2.first << endl;  // 1
    cout << *result_v2.second << endl;  // 8



    return 0;
}