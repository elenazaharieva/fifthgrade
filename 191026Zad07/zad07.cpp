/*
 * zad07.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;

int main() {
	int m;
	cin >> m;

	int c;
	cin >> c;

	int a;
	cin >> a;

	int b;
	cin >> b;

	cout << (b - a - 1) << endl;
	cout << ((b - a) * (m * 100 + c)) << endl;

	return 0;
}

