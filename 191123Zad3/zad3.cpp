/*
 * zad3.cpp
 *
 *  Created on: Nov 27, 2019
 *      Author: eli
 */
#include <iostream>
using namespace std;
int main() {
int a;
cin>>a;
if(a<1000 && a>=10000){
	cout<<"chisloto ne e  chetiricifreno";
	return 0;
}
if(a/100==a%100){
	cout<<"yes";

}else{
	cout<<"no";
}

	return 0;
}



