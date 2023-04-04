#include <iostream>
using namespace std;

class TestClass {
private:
    int arr[5] {30, 2, 5, 3, 1};

public:
    int& operator[](int index) {
        return arr[index];
    }

};

int main() {
    TestClass a;
    cout << a[1] << endl;
    return 0;
}