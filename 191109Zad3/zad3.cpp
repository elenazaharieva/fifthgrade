/*
 * zad3.cpp
 *
 *  Created on: Nov 10, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	cin >> a;
	cin >> b;
	cin >> c;
	int naigolqmoChislo;
	if (a > b) {
		naigolqmoChislo=a;
	} else {
		naigolqmoChislo=b;
	}
	if (naigolqmoChislo < c) {
		naigolqmoChislo=c;
	}

	cout<<naigolqmoChislo;
	return 0;
}





