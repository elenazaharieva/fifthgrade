/*
 * Zad6.cpp
 *
 *  Created on: Dec 11, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n <= 0 || n > 50) {
		cout << "Въведеното число трябва да е от 1 до 50";
		return 0;
	}

	int br = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			br++;
		}
	}
	cout << br << endl;
	return 0;
}

