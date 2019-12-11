/*
 * Zad8.cpp
 *
 *  Created on: Dec 11, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n <= 0 || n > 20) {
		cout << "Въведеното число трябва да е от 1 до 20";
		return 0;
	}

	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
	cout << fact << endl;
	return 0;
}



