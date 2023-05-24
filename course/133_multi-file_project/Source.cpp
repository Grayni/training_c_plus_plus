#include <iostream>
#include "Sum.h"
#include "Myclass.h"
using namespace std;

int main() {
    int result = Sum(2, 5);

    cout << result << endl;

    myNamespace::Myclass m;
    m.PrintMessage('h');

    return 0;
}