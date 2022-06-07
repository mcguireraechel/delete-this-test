//============================================================================
// Name        : getting.cpp
// Author      : Raechel McGuire
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;



 int *poop(int a, int b,int *lol){

	*lol = a +b;

	return lol;


}



int main() {

	int a =2;
	int b = 5;
	int c =18;

	int *r = &c;

	cout<< "C started as " << c << endl;

	poop(a, b, r);
	cout<< "C ended as " << c << endl;


}




