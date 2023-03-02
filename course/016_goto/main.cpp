#include <iostream>
using namespace std;

int main() {
    cout << "test 1" << endl;

    goto nameLink;
    cout << "test 2" << endl;
    cout << "test 3" << endl;

    nameLink:
    cout << "test 4" << endl;
    cout << "test 5" << endl;

    system("pause");
}

