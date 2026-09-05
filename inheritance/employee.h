#pragma once
#include <iostream>	
using namespace std;
#include <string>;

class employee
{
private:
	string job;
	int age;
	int id;
public:

	employee(){
		job = "unknown";
		age = 0;
		id = 0;
		cout << "Default constructor employee called" << endl;
	}
	employee(string j, int a, int i): job(j), age(a), id(i)	{

	
	}
	~employee() {
		cout << "Destructor employee called" << endl;
	}	

	void setjob(string j) {
		job = j;
	}
	void setage(int a) {
		age = a;
	}
	void setid(int i) {

		id = i;
	}
	string getjob() {
		return job;
	}
	int getage() {
		return age;
	}
	int getid() {
		return id;
	}	

	void print()
	{
		cout << job << endl;
		cout << age << endl;
		cout << id << endl;	
	}

};
