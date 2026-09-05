#pragma once
#include <string>
#include<iostream>
using namespace std;
class person
{
private:
	string name;
	string gender;
	int age;
public:
	person() {
		name = "unknown";
		gender = "unknown";
		age = 0;
		
	}
	person(string n, string g, int a) {
		name = n;
		gender = g;
		age = a;
		
	}
	void setname(string n) {
		name = n;
	}
	void setgender(string g)
	{
		gender = g;
	}
	void setage(int a) {
		age = a;
	}
	string getname() {
		return name;
	}
	string getgender() {
		return gender;
	}
	int getage() {
		return age;
	}

	void display() {
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Age: " << age << endl;
	}
};
