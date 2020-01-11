/*
 * zad08.cpp
 *
 *  Created on: Jan 5, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > 50 || n < 0) {
		return 0;
	}
	long fib2 = 1;
	if (n == 1) {
		cout << fib2 << endl;
		return 0;
	}
	long fib1 = 1;
	if (n == 2) {
		cout << fib1 << endl;
		return 0;
	}
	long fib = fib1 + fib1;
	int counter = 3;
	while (counter++ != n) {
		fib2 = fib1;
		fib1 = fib;
		fib = fib1 + fib2;
	}
	cout << fib << endl;
	return 0;
}

