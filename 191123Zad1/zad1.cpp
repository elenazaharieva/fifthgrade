/*
 * zad1.cpp
 *
 *  Created on: Nov 23, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int kod, num1, num2, rez;
	cout << "Vavedete kod za operaciqta\n";
	cout << "1-subirane,2-izvajdane,3-umnojenie,4-delenie\n";
	cin >> kod;
	if (kod < 1 || kod > 4){
		cout << "Kodut trqbwa da e ot 1 do 4";
		return 0;
	}
	cout << "Vavedete dwete chisla\n chislo 1: ";
	cin >> num1;
	cout << "Vavedete dwete chisla\n chislo 2: ";
	cin >> num2;
	if (kod == 4 && num2 == 0){
		cout << "Ne moje da se deli na 0";
		return 0;
	}
	if (kod == 1)
		rez = num1 + num2;
	if (kod == 2)
		rez = num1 - num2;
	if (kod == 3)
		rez = num1 * num2;
	if (kod == 4)
		rez = num1 / num2;

	cout << rez << endl;
	return 0;
}

