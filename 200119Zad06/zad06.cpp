/*
 * zad06.cpp
 *
 *  Created on: Jan 19, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > 10000) {
		return 0;
	}

	int fib1 = 1;
	int fib2 = 1;
	int fibn;
	do {
		fibn=fib1+fib2;
		fib1 = fib2;
		fib2 = fibn;
	}while(fibn <= n);

	cout << fibn << endl;

	return 0;
}

