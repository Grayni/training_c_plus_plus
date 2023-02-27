#include <iostream>
using namespace std;

void main() {
    const int COUNT_WEEKDAYS = 7;
    const char NEW_LINE = '\n';
    const char TAB = '\t';

    // error => COUNT_WEEKDAYS = 5;

    cout << COUNT_WEEKDAYS << NEW_LINE;
    cout << COUNT_WEEKDAYS << TAB << TAB << COUNT_WEEKDAYS;
}