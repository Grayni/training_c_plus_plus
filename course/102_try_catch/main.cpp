#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    fin.exceptions(ifstream::badbit | ifstream::failbit);


    string path = "my_file.tx";

    //if (!fin.is_open()) {
    //    cout << "error" << endl;
    //}
    //else {
    //    cout << "success" << endl;
    //}

    try {
        cout << "An attempt to open a file" << endl;
        fin.open(path);
        cout << "The file has been successfully opened." << endl;
    }
    catch (const ifstream::failure& ex) {
        cout << ex.what() << endl;
        cout << ex.code() << endl;
        cout << "Error of file opening." << endl;
    }

    fin.close();

    return 0;
}