/*
 * zad01.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;

int main() {
	int a, b, temp;
	cin >> a >> b;

	temp = a;
	a = b;
	b = temp;

	cout << a << " " << b << endl;
	return 0;
}

