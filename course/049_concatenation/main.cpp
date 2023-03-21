#include <iostream>
using namespace std;

void main() {
    // strcat_s

    char result[255] {};
    char str1[255] = "Hello ";
    char str2[255] = "World";

    cout << result << endl;

    strcat_s(result, str1);
    cout << result << endl;

    strcat_s(result, str2);
    cout << result << endl;

    // string
    string str3 = "Ford";
    string str4 = "Mustang";
    string str5 = "!!!";
    string model;

    model = str3 + " " + str4 + str5;

    cout << model << endl;
}