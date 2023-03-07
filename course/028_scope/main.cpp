#include <iostream>
using namespace std;

// Global
string some = "show variable";
int val;

void foo(int val) {
    cout << some << " in foo" << "\n";
    val++;
}

void main() {
    if (true) {
        int a;
        a = 0;
    }

    // a = 5; error 

    int i;

    for (i = 0; i < 5; i++) {
        cout << "number " << i << "\n";
    }

    i = 20;
    cout << "new number " << i << "\n";

    cout << val << "\n";
    foo(val);
    cout << val << "\n";

    cout << some << " in main" << "\n";


    val++;
    cout << val << "\n";
}