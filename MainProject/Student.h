#pragma once
#include "main.h"

// entity-class
class Student {
public:
	string firstname;
	string surname;
	int age;
	int _class;
	char gender;
	bool alive;
	double mark;

	// default-constructor (конструктор по умолчани)
	Student() {
		//cout << "default-constructor" << endl;
		firstname = "no name";
		surname = "no surname";
		age = 0;
		_class = 0;
		gender = 'm';
		alive = false;
		mark = 4;
	}

	string toString() {
		string s = firstname;
		s += " " + surname;
		s += ", age = " + to_string(age);
		s += ", class = " + to_string(_class);
		s += ", gender = " + to_string(gender);
		s += ", is alive - ";
		s += (alive ? "yes" : "no");
		s += ", average mark = " + to_string(mark);
		return s;
	}
};