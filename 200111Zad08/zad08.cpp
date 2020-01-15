/*
 * zad08.cpp
 *
 *  Created on: Jan 15, 2020
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int beli;
	cin >> beli;
	int cherveni;
	cin >> cherveni;

	int max = beli;
	if (max < cherveni) {
		max = cherveni;
	}

	int nod = 1;
	for (int i = 1; i < max / 2; i++) {
		if (beli % i == 0 && cherveni % i == 0) {
			nod = i;
		}
	}

	cout << nod << endl;
	return 0;
}

