/*
 * zad7.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int k;
	cin >> k;

	if (k <= 0 || k > 18) {
		cout << "NO" << endl;
	}

	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i + j == k) {
				cout << i * 10 + j << endl;
			}
		}
	}
	return 0;
}

