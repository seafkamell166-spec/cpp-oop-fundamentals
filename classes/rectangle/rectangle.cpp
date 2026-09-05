#include "rectanglee.h"
#include<iostream>;
#include<cstdlib>;
using namespace std;


rectangle::rectangle() {
	width = 0;
	length = 0;
}

void rectangle::setwidth(float w) {
	if (w >= 0)
		width = w;
	else
	{
		cout << "invalid width\n";
		exit(EXIT_FAILURE);
	}
}
void rectangle::setlength(float l) {
	if (l >= 0)
		length = l;
	else
	{
		cout << "invalid length\n";
		exit(EXIT_FAILURE);
	}
}

float rectangle::getwidth() {
	return width;
}
float rectangle::getlength() {
	return length;
}
float rectangle::getarea() {
	return width*length;
}