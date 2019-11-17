/*
 * zad3.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	if (num1 % num2 == 0) {

		cout << num1 / num2;
	} else {
		cout << "chislata ne mogat da se razdelqt tochno edno na drugo.";
	}
	return 0;
}

