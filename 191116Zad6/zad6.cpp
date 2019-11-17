/*
 * zad6.cpp
 *
 *  Created on: Nov 17, 2019
 *      Author: eli
 */
# include <iostream>
using namespace std;
int main() {
	int m;
	cin >> m;
	int obkofi = m / 5;
	int ostatuk = m % 5;
	if (ostatuk % 2 == 0) {
		cout << obkofi<<" "<<ostatuk / 2;

	}
	if (ostatuk % 3 == 0) {
		cout << obkofi<<" "<<ostatuk / 3;

	}
	return 0;
}

