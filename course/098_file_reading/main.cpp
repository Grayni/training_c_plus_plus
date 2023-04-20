#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string path = "my_file.txt";

    ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        cout << "error: file opening" << endl;
    }
    else {
        cout << "success" << endl;

        char ch;

        while (fin.get(ch)) {
            cout << ch;
        }

        fin.clear();
        fin.seekg(0);

        string str;
        cout << "\n\n";

        while (!fin.eof()) {
            str = "";
            fin >> str;
            cout << str << endl;
        }

        fin.clear();
        fin.seekg(0);
        cout << "\n\n";

        while (!fin.eof()) {
            str = "";
            getline(fin, str);
            cout << str << endl;
        }
    }

    fin.close();
    return 0;
}