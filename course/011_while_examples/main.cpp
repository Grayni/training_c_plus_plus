#include <iostream>
using namespace std;

int main() {
    int symbolCount;
    char symbol;
    int lineType;
    int index = 0;

    cout << "Enter number of symbols in line: ";
    cin >> symbolCount;

    cout << "Enter symbol: ";
    cin >> symbol;

    cout << "Select type of line: " << endl
        << "1 - vertical" << endl
        << "2 - horizontal" << endl << endl;

    cin >> lineType;
    cout << endl;

    while (index < symbolCount) {
        switch (lineType) {
        case 1:
            cout << symbol << endl;
            break;
        case 2:
            cout << symbol;
            break;
        default:
            cout << "invalid value" << endl;
            return 0;
        }

        index++;
    }

    if (lineType == 2) cout << endl;
}