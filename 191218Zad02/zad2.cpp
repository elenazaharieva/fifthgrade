/*
 * zad2.cpp
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

	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		if (c == k) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}

