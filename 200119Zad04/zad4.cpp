/*
 * zad4.cpp
 *
 *  Created on: Jan 19, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int chislo1;
	int chislo2;
	int br = 0;
	bool strNaKv = false;
	do {
		cin >> chislo1;
		br++;

		cin >> chislo2;
		br++;

		// Proverka strNaKv number chislo
		strNaKv = (chislo1 == chislo2) && (chislo1 > 0);

	} while (!strNaKv);
	cout << br << endl;
	return 0;
}

