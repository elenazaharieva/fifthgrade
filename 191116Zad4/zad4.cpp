/*
 * zad4.cpp
 *
 *  Created on: Nov 16, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int a, b;
	int c, d;
	cin >> a >> b;
	cin >> c >> d;
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (c < d) {
		int temp = c;
		c = d;
		d = temp;
	}
	if (a < c && b < d) {
		cout << "може да побереш правоъгълник със страни " << a << " и " << b
				<< " в правоъгълник със страни " << c << " и " << d;
	} else {
		cout << "не може да побереш правоъгълник със страни " << a << " и " << b
				<< " в правоъгълник със страни " << c << " и " << d;
	}

	return 0;
}
