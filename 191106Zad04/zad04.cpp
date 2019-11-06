/*
 * zad04.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;

int main() {
	int h;
	cin >> h;
	int m;
	cin >> m;
	int s;
	cin >> s;
	int ps;
	cin >> ps;

	int startTimeInSec;
	startTimeInSec = h * 3600 + m * 60 + s;

	int endTimeInSec = startTimeInSec + ps;

	int endH;
	endH = endTimeInSec/3600;

	int endM;
	endM = (endTimeInSec - endH*3600)/60;

	int endS;
	endS = endTimeInSec%60;

	cout << endH << " ";
	cout << endM << " ";
	cout << endS << " ";

	return 0;
}



