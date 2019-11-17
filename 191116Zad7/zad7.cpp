/*
 * zad7.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

	int a1 = num / 100;
	int a2 = (num - a1 * 100) / 10;
	int a3 = num % 10;

	if (a1 == 0 || a2 == 0 || a3 == 0) {
		cout << "Има цифра 0 в числото.";
		return 0;
	}

	if (num % a1 == 0 && num % a2 == 0 && num % a3 == 0) {
		cout << "дели се на " << a1 << ", " << a2 << " и " << a3;
	} else {
		if (num % a1 != 0) {
			cout << "не се дели на " << a1;
		} else if (num % a2 != 0) {
			cout << "не се дели на " << a2;
		} else if (num % a3 != 0) {
			cout << "не се дели на " << a3;
		}
	}
	return 0;
}
