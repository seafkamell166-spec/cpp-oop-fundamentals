#include <iostream>
#include<string>
#include<cstdlib>
#include "rectanglee.h"
using namespace std;

int main() {

	rectangle r1;
	rectangle r2;


	r1.setlength(5.0);
	r1.setwidth(5.0);


	cout << "length =    " << r1.getlength() << endl;
	cout << "width =    " << r1.getwidth() << endl;
	cout << "area =    " << r1.getarea() << endl;
	cout << "_____________________r2_____________________\n";
	cout << "length =    " << r2.getlength() << endl;
	cout << "width =    " << r2.getwidth() << endl;
	cout << "area =    " << r2.getarea() << endl;

}