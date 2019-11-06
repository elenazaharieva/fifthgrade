/*
 * zad07.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int M;
	int a;
	int b;
	int c;
	cin >> M;
	cin >> a;
	cin >> b;
	cin >> c;
	int g;
	g = (M - (a + b + c)) / 3;
	int e;
	int d;
	int f;
	e = a + g;
	d = b + g;
	f = c + g;
	cout << e << " " << d << " " << f;

	return 0;
}

