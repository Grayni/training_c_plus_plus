#include <iostream>
using namespace std;

void foo(const char* str) {
    cout << strlen(str) << endl;
}

void sizeString(const char* str) {
    int i = 0;
    while (true) {

        if (str[i] == '\0') break;
        i++;
    }
    cout << "length of string: " << i << endl;
}

void main() {
    char str[] = "hello";
    const char* string = "hello";

    cout << str << endl;
    cout << string << endl;

    const char* strArr[] = {"hello", "bro"};

    for (int i = 0; i < 2; i++) {
        cout << strArr[i] << " ";
    }
    cout << endl;

    cout << "size string func: ";
    foo(string);

    sizeString(string);
}