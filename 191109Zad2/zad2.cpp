/*
 * zad2.cpp
 *
 *  Created on: Nov 9, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	cout << "[" << a << "," << b << "]" << endl;
	return 0;
}

