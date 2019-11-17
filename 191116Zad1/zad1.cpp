/*
 * zad1.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	int x;
	cin >> a;
	cin >> b;
	cin >> x;
	if (a < x && x < b) {
		cout << "yes";
	} else {
		cout << "no";
	}
	return 0;
}

