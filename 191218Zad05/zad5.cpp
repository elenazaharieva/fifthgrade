/*
 * zad5.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int k;
	cin >> k;

	for (int i = 2; i < k; i++) {
		if (k % i == 0) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
