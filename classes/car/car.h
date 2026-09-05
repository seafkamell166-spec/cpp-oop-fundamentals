#pragma once
using namespace std;
#include <string>



class car
{
private:
	string maker;
	int model;
	string color;
public:
	void setmkaer(string m);
	string getmaker();
	void setmodel(int m);
	int getmodel();
	void setcolor(string c);
	string getcolor();


	car(string m, int mo,string c );
	

};

