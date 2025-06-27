#pragma once
#include "Student.h"

// canonical constructor (канонический конструктор)
Student::Student(string firstname, string surname, int age, int _class,
	char gender, bool alive, double mark, int size, string* subjects) {
	//cout << "canonical constructor" << endl;
	this->firstname = firstname;
	this->setSurName(surname);
	this->setAge(age);
	this->_class = _class;
	this->setAge(gender);
	this->setAlive(alive);
	this->mark = mark;
	this->size = size;
	this->subjects = subjects;
}

Student::~Student() {
	// cout << "destructor" << endl;
	if (subjects != nullptr) {
		delete[] subjects;
	}
}


int Student::getClass() {
	return _class;
}

void Student::setClass(int _class) {
	if (_class >= 1 && _class <= 11) {
		this->_class = _class;
	}
}

double Student::getMark() {
	return mark;
}

void Student::setMark(int mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}

string Student::toString() {
	string s = getFirstName();
	s += " " + getSurName() + ".";
	s += ", age = " + to_string(age);
	s += ", class = " + to_string(_class);
	s += ", gender = " + to_string(gender);
	s += ", is alive - ";
	s += (isAlive() ? "yes" : "no");
	s += ", average mark = " + to_string(mark);
	return s;
}