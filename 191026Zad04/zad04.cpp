/*
 * zad04.cpp
 *
 *  Created on: Oct 26, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;

int main() {
	int e;
	cin >> e;
	int a, b, c, d;
	a = e / 1000;
	b = (e % 1000) / 100;
	c = (e % 100) / 10;
	d = (e % 10);
	cout << "A:" << endl;
	cout << d << endl;
	cout << c << endl;
	cout << b << endl;
	cout << a << endl;
	cout << "----" << endl;

	cout << "B:" << endl;
	int sum = a + b + c + d;
	int mpl = a * b * c * d;
	cout << sum << endl;
	cout << mpl << endl;
	cout << "----" << endl;

	cout << "V:" << endl;
	int v = a * 1000 + d * 100 + c * 10 + b;
	cout << v << endl;
	cout << "----" << endl;

	cout << "G:" << endl;
	int g = c * 1000 + a * 10 + d;
	cout << g << endl;
	cout << "----" << endl;
	return 0;
}

