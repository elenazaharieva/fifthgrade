/*
 * zad05.cpp
 *
 *  Created on: Jan 5, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int chislo;
	cin >> chislo;
	int kratninatri = 0;
	int proizwedenie = 1;
	while (chislo != 0) {
		if (chislo % 3 == 0) {
			kratninatri++;
			proizwedenie *= chislo;
		}
		cin >> chislo;
	}

	if (proizwedenie == 1) {
		cout << "NO" << endl;
	}else{
		cout << proizwedenie << endl;
	}
	return 0;
}

