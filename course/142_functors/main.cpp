#include <iostream>

using namespace std;

class MyFunctor {
public:
    void operator()() {
        cout << "functor " << count << endl;
        count++;
    }
private:
    int count = 0;


};

class SumFunctor {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

class EvenFunctor {
public:
    void operator()(int value) {
        if (value % 2 == 0) {
            evenSum += value;
            evenCount++;
        }
    }
    void showEvenSum() {
        cout << "Even sum: " << evenSum << endl;
    }

    void showEvenCount() {
        cout << "Even count: " << evenCount << "\n\n";
    }

private:
    int evenSum = 0;
    int evenCount = 0;
};

int main() {
    MyFunctor f;

    f();
    f();
    f();
    f();

    SumFunctor sum;

    cout << "sum: " << sum(2, 5) << endl;

    EvenFunctor even;

    int arr[] = {2, 5, 3, 4, 0, 8, 6};


    for (auto el : arr) {
        even(el);
        even.showEvenSum();
        even.showEvenCount();

    }

    return 0;
}