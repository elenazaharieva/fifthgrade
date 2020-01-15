/*
 * zad04.cpp
 *
 *  Created on: Jan 11, 2020
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	bool have2dig = false;
	int digitOld;
	int digitNew;
	cin >> digitNew;
	digitOld = digitNew + 1;
	while (digitNew != 0) {
		if (digitOld == digitNew) {
			have2dig = true;
		}
		digitOld = digitNew;
		cin >> digitNew;
	}

	if (have2dig) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

