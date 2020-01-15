/*
 * zad03.cpp
 *
 *  Created on: Jan 11, 2020
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int min = -1;
	int digit;
	cin >> digit;
	while (digit != 0) {
		if (digit % 2 == 1 && digit > min) {
			min = digit;
		}
		cin >> digit;
	}

	if (min == -1) {
		cout << "NO" << endl;
	} else {
		cout << min << endl;
	}
	return 0;
}

