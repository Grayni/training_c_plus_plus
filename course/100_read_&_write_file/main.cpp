#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string path = "my_file.txt";

    fstream fs;

    // ::in -> read, ::out -> write
    fs.open(path, fstream::in | fstream::out | fstream::app);

    if (!fs.is_open()) {
        cout << "error open" << endl;
    }
    else {
        cout << "success" << "\n\n";

        string msg;
        int value;

        cout << "if to select 1 - message writing in file" << endl;
        cout << "if to select 2 - file reading" << endl;

        cin >> value;
        cin.ignore();

        if (value == 1) {
            cout << "write text: ";
            getline(cin, msg);
            fs << msg << endl;
        }
        else if (value == 2) {
            cout << "file reading..." << "\n\n";
            while (!fs.eof()) {
                msg = "";
                getline(fs, msg);
                cout << msg << endl;
            }
        }
        else {
            cout << "invalid data" << endl;
        }
    }

    fs.close();

    return 0;
}