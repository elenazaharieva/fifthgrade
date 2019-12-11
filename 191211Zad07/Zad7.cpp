/*
 * Zad7.cpp
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

	int pr = 1;
	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) {
			pr *= i;
		}
	}
	cout << pr << endl;
	return 0;
}

