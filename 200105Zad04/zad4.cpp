/*
 * zad4.cpp
 *
 *  Created on: Jan 5, 2020
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int chislo;
	cin >> chislo;
	int otricatelni = 0;
	while(chislo != 0){
		if (chislo < 0) {
			otricatelni++;
		}
		cin >> chislo;
	}
	cout<<otricatelni<<endl;
	return 0;
}



