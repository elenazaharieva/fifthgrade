/*
 * zad07.cpp
 *
 *  Created on: Jan 5, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > 10000 || n < 0) {
		return 0;
	}
	int fib2 = 1;
	cout << fib2;
	int fib1 = 1;
	cout << " " << fib1;
	int fib = fib1 + fib1;
	cout << " " << fib;
	while (fib <= n) {
		fib2 = fib1;
		fib1 = fib;
		fib = fib1 + fib2;
		if (fib <= n) {
			cout << " " << fib;
		}
	}
	cout << endl;
	return 0;
}

