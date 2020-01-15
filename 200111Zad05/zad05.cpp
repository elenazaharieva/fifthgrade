/*
 * zad05.cpp
 *
 *  Created on: Jan 11, 2020
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	bool haveNarastvashti = false;
	int digitOld;
	int digitNew;
	cin >> digitNew;
	digitOld = digitNew + 1;
	while (digitNew != 0) {
		if (digitOld < digitNew) {
			haveNarastvashti = true;
		}
		digitOld = digitNew;
		cin >> digitNew;
	}

	if (haveNarastvashti) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

