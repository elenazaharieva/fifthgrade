/*
 * zad2.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int chislo;
	cin >> chislo;
	if (chislo % 3 == 0) {
		cout << chislo << " " << "e kratno na tri";
	} else {
		cout << chislo << " " << "ne e kratno na tri";
	}
	return 0;
}

