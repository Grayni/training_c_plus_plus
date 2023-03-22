#include <iostream>
//#define DEBUG
#define status 10

using namespace std;

void main() {
#ifdef DEBUG
    cout << "Start" << endl;
#else
    cout << "Production" << endl;
#endif // DEBUG

    for (int i = 0; i < 4; i++) {
#ifdef DEBUG
        cout << i << endl;
#else   
        cout << i * i << endl;
#endif      
    }

#ifdef DEBUG
    cout << "End" << endl;
#endif

#ifndef DEBUG
    cout << "no def" << endl;
#endif

#if status == 1
    cout << "turn on" << endl;
#elif status == 10
    cout << "error" << endl;
#else
    cout << "turn off" << endl;
#endif

    system("pause");
}