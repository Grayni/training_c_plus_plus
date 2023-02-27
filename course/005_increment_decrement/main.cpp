#include <iostream>
using namespace std;

void main() {
	int a = 1;

	a = a + 1;
	cout << a << endl;

	a++;
	cout << a << endl;


	++a;
	cout << a << endl;

	--a;
	cout << a << endl;

	a--;
	cout << a << endl;


	// difference b++ & ++b
	int b = 1;

	cout << endl << "Output b=1: " << b << endl;
	cout << "Prefix add value now ++b: " << ++b << endl;
	cout << "Postfix add value after implementation b++: " << b++ << endl;
	cout << "Show b again. Now b change +1: " << b;


}