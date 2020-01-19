/*
 * zad5.cpp
 *
 *  Created on: Jan 19, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;

	bool strNaTr = false;
	do {
		cin >> a >> b >> c;
		// Proverka strNaTr number chislo
		strNaTr = (a + b) > c && (a + c) > b && (b + c) > a;

	} while (!strNaTr);
	cout << a + b + c << endl;
	return 0;
}

