/*
 * Zad2.cpp
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

	for (int i = 1; i <= n; i++) {
		cout << i << endl;
	}
	return 0;
}

