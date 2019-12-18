/*
 * zad1.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n < 0) {
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int e;
		cin >> e;
		if (e > 0) {
			sum += e;
		}
	}
	cout << sum << endl;
	return 0;
}

