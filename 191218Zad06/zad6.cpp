/*
 * zad6.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int k;
	cin >> k;

	for (int i = 0; i < 5; i++) {
		cout << k % 10;
		k /= 10;
	}
	cout << endl;
	return 0;
}

