/*
 * zad6.cpp
 *
 *  Created on: Jan 5, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int chislo;
	cin >> chislo;
	int suma = 0;
	while (chislo >= 0) {

		if (chislo % 2 == 0) {
			suma += chislo;
		}
		cin>>chislo;
	}

	cout << suma << endl;
	return 0;
}

