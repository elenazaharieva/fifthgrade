/*
 * zad4.cpp
 *
 *  Created on: Dec 18, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int c;
	cin >> c;
	int min = c;
	for (int i = 1; i < n; i++) {
		cin >> c;
		if (c < min) {
			min = c;
		}
	}
	cout << min << endl;
	return 0;
}

