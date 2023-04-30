#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Printer {
public:
    void print(T value) {
        cout << value << endl;
    }
};

template<>
void Printer<double>::print(double value) {
    cout << value << "))))" << endl;
};

template<>
class Printer<string> {
public:
    void print(string value) {
        cout << value + "!!!" << endl;
    }
};

int main() {
    int a = 10;
    Printer<int> printer;
    printer.print(a);

    string b = "hello world";
    Printer<string> strPrinter;
    strPrinter.print(b);

    double c = 1.002;
    Printer<double> doublePrinter;
    doublePrinter.print(c);

    return 0;
}