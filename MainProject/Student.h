#pragma once
#include "Human.h"

// entity-class
class Student : public Human {
private:
	int _class;
	double mark;
	int size;
	string* subjects;
public:
	Student();
	Student(string firstname, string surname, int age, int _class,
		char gender, bool alive, double mark, int size, string* subjects);
	~Student();

	int getClass();
	void setClass(int _class);
	double getMark();
	void setMark(int mark);	
	string toString();
};