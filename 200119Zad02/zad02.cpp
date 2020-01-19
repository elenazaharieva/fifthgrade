/*
 * zad02.cpp
 *
 *  Created on: Jan 19, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int B;
	int chislo;
	int pro = 1;
	cin >> B;
	do {
		cin >> chislo;
		if (chislo % 2 != 0) {
			pro *= chislo;
		}
	} while (pro <= B);
	cout << pro << endl;

	return 0;
}

