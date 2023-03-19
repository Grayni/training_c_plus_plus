#include <iostream>
using namespace std;

void main() {
    char symbol = '3';
    cout << symbol << endl;

    char string1[] = "Low";
    char string2[2] = "L";

    cout << "string1[0] == string2[0]: " << ((string1[0] == string2[0]) ? "True" : "False") << endl;

    char string3[] = {'t', 'e', 's', 't'};  // if not use \0 => garbage at the end
    char string4[] = {'t', 'e', 's', 't', '\0'};

    cout << "string3: " << string3 << endl;
    cout << "string4: " << string4 << endl;
    cout << "len string3: " << strlen(string3) << endl;
    cout << "len string4: " << strlen(string4) << endl;
}