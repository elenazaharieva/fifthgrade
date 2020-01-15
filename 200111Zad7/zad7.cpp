/*
 * zad7.cpp
 *
 *  Created on: Jan 15, 2020
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int posl = 1;
	int maxPosl = 1;
	int digitOld;
	int digitNew;
	cin >> digitNew;
	digitOld = 51;
	while (digitNew != 0) {
		if (digitOld < digitNew) {
			posl++;
			if (maxPosl < posl) {
				maxPosl = posl;
			}
		} else {
			posl = 1;
		}
		digitOld = digitNew;
		cin >> digitNew;
	}

	cout << maxPosl << endl;
	return 0;
}
