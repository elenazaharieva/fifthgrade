/*
 * zad8.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: eli
 */

#include <iostream>
using namespace std;
int main() {
	int m;
	cin >> m;

	int n;
	cin >> n;

	for (int i = m; i <= n; i++) {
		int divider = (i / 100) * 10 + i % 10;
		if (i % divider == 0) {
			cout << i << endl;
		}
	}
	return 0;
}

