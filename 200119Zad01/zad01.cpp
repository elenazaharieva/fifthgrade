/*
 * zad01.cpp
 *
 *  Created on: Jan 19, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int B;
	int chislo;
	int suma = 0;
	cin >> B;
	do {
		cin >> chislo;
		suma += chislo;
	} while (suma <= B);
	cout << suma << endl;

	return 0;
}

