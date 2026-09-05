#pragma once
#include <string>	
#include <iostream>
using namespace std;
#include "person.h"


class student :  public person
{
private:
	int level;
	float gpa;
	string major;
public:
	student(string n, string g, int a , int l, float gp, string m) :person(n,g,a) {
		level = l;
		gpa = gp;
		major = m;
	}
void setlevel(int l) {
	level = l;
}
 
	void setgpa(float gp) {
		gpa = gp;
}
	
	void setmajor(string m) {
		major = m;
	}
	int getlevel() {
		return level;
	}
	float getgpa() {
		return gpa;
	}
	string getmajor() {
		return major;
	}
	void display () {
		person::display();
		cout << "Level: " << level << endl;
		cout << "GPA: " << gpa << endl;
		cout << "Major: " << major << endl;
	}
	};