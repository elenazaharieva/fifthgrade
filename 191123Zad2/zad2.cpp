/*
 * zad2.cpp
 *
 *  Created on: Nov 23, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	if (a < 5 || a > 100) {
		cout << "a ne e v intervala";
		return 0;

	}
	if (b < 5 || b > 100) {
		cout << "b ne e v intervala";
		return 0;
	}
	if (a == b) {
		cout << "kvadrata ima lice" << " " << (a * b) << " "
				<< "i ima perimetur" << " " << (a * 4);
	} else {
		cout << "pravougulnik ima lice" << " " << (a * b) << " "
				<< "i ima perimetur" << " " << (a * 2 + b * 2);
	}
	return 0;
}

