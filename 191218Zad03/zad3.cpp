/*
 * zad3.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	int n;
	cin >> n;
	int z = 0;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		if (c == k) {
			z++;

		}
	}
	cout << z << endl;
	return 0;
}

