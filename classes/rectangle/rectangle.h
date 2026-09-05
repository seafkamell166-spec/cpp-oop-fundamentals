#pragma once
using namespace std;
#include<string>;



class rectangle
{
private:
	float width;
	float length;

public:
	rectangle();
	void setwidth(float w);
	void setlength(float l);
	float  getwidth();
	float  getlength();
	float  getarea();

};

