/*
 * zad05.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;

int main() {
	int H1;
	int M1;
	int H2;
	int M2;
	cin >> H1 >> M1;
	cin >> H2 >> M2;

	int h1min = H1 * 60 + M1;
	int h2min = H2 * 60 + M2;

	int poletInMin = h2min - h1min;

	int poletH = poletInMin / 60;
	int poletM = poletInMin % 60;

	cout << poletH;
	cout << poletM;

	return 0;
}

