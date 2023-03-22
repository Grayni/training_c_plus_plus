#include <iostream>
#define PI 3.14
#define tab "\t"
#define Begin {
#define End }
#define FOO(x, y)((x)*(y))

using namespace std;

void main() {
    cout << PI << endl;

    cout << "test\ttest" << endl;
    cout << "test" << tab << "test";

    for (int i = 0; i < 3; i++) Begin
        cout << "cycle: " << i << endl;
    End

        ;

    cout << FOO(5, 2) << endl;
    system("pause");
}