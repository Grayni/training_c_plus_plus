#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout;

    string path = "my_file.txt";
    fout.open(path, ofstream::app);

    if (!fout.is_open()) {
        cout << "Error open file" << endl;
    }
    else {
        cout << "Write anything:" << endl;
        string str;
        getline(cin, str);
        fout << str << endl;
    }

    fout.close();

    return 0;
}