/*
 * zad05.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 200;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}

