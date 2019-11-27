/*
 * zad5.cpp
 *
 *  Created on: Nov 27, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a < 100 || a > 999) {
		cout << "chisloto ne e tricifreno";
	}
	int ed = a % 10;
	int stot = a / 100;
	int des = (a / 10) % 10;
	int sbornachisla = ed * stot * des;
	if (a % sbornachisla == 0) {
		cout << "chisloto e kratno na proizvedenieto ot cifrite si";
	} else {
		cout << "chisloto ne e kratno na proizvedenieto ot cifrite si";

	}
}

