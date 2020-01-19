/*
 * zad03.cpp
 *
 *  Created on: Jan 19, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int abcd;
	int br = 0;
	bool isHappy = false;
	do {
		cin >> abcd;
		br++;

		// Proverka isHappy number abcd
		int ab = abcd/100;
		int cd = abcd%100;

		isHappy = (ab == cd);

	} while (!isHappy);
	cout << br << endl;
	return 0;
}

