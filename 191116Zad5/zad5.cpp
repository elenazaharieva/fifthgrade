/*
 * zad5.cpp
 *
 *  Created on: Nov 17, 2019
 *      Author: eli
 */
# include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cin>>a;
	cin>>b;
	int P=a*b;
	int PDes=P%100;
	int PEdi=P%10;
	int des = PDes/10;
	cout<<P<<" "<<des;
	return 0;
}




