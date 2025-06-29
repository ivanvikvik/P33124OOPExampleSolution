#pragma once
#include "Student.h"

Student::Student() : Human("", "", 0, '\0', false), _class(_class),
size(size), subjects(subjects) { //Student("", "", 0, 0, '\0', false, 0, 0 , nullptr) {
	cout << "Constructor of class Student." << endl;
	cout << "id = " << Student::id << endl;
	cout << "id = " << Human::id << endl;
}

// canonical constructor (канонический конструктор)
Student::Student(string firstname, string surname, int age, int _class,
	char gender, bool alive, double mark, int size, string* subjects) :
	Human(firstname, surname, age, gender, alive) {
	this->_class = _class;
	this->mark = mark;
	this->size = size;
	this->subjects = subjects;	
}

Student::~Student() {
	// cout << "destructor" << endl;
	if (subjects != nullptr) {
		delete[] subjects;
	}
	cout << "Destructor of class Student." << endl;
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
	string s = Human::toString();
	s += ", class = " + to_string(_class);
	s += ", average mark = " + to_string(mark);
	return s;
}