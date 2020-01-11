/*
 * zad02.cpp
 *
 *  Created on: Jan 5, 2020
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int ostatuk = n%10;
	int chislo = n/10;
	int broika = 1;
	int suma = ostatuk;
	while(chislo != 0){
		ostatuk = chislo%10;
		chislo = chislo/10;
		broika++;
		suma += ostatuk;
	}
	cout << broika << " " << suma << endl;
	return 0;
}

