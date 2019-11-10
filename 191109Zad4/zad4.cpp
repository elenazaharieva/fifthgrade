/*
 * zad4.cpp
 *
 *  Created on: Nov 10, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	int naigolqmoChislo;
	int naimalkoChislo;
	if (a > b) {
		naigolqmoChislo = a;
		naimalkoChislo = b;
	} else {
		naigolqmoChislo = b;
		naimalkoChislo = a;
	}
	if (naigolqmoChislo < c) {
		naigolqmoChislo = c;
	}
	if (naimalkoChislo > c) {
		naimalkoChislo = c;
	}

	cout << naigolqmoChislo;
	cout << (a + b + c - naigolqmoChislo - naimalkoChislo);
	cout << naimalkoChislo;
	return 0;
}

