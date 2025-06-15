#pragma once
#include <iostream>
#include <string>
using namespace std;

// entity class
class Dragon {
private:
	int age;
	int head;

	void calculateHeads();
public:

	Dragon() : age(0), head(0) { }
	Dragon(int age);
	int getAge();
	void setAge(int age);
	int getHead();			
	int getEye();
	string toString();
};
