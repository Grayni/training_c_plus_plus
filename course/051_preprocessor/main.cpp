#include <iostream>
#define PI 3.14
#define tab "\t"
#define Begin {
#define End }

using namespace std;

void main() {
    cout << PI << endl;

    cout << "test\ttest" << endl;
    cout << "test" << tab << "test";

    for (int i = 0; i < 3; i++) Begin
        cout << "cycle: " << i << endl;
    End

        system("pause");
}