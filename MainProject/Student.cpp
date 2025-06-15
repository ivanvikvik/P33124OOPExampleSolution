#pragma once
#include "Student.h"

// canonical constructor (канонический конструктор)
Student::Student(string firstname, string surname, int age, int _class,
	char gender, bool alive, double mark, int size, string* subjects) {
	//cout << "canonical constructor" << endl;
	this->firstname = firstname;
	this->surname = surname;
	this->age = age;
	this->_class = _class;
	this->gender = gender;
	this->alive = alive;
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

string Student::getFirstName() {
	return firstname;
}

void Student::setFirstName(string firstname) {
	this->firstname = firstname;
}

string Student::getSurname() {
	return surname;
}

void Student::setSurname(string surname) {
	this->surname = surname;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int age) {
	if (age > 0) {
		this->age = age;
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

// getter
bool Student::isAlive() {
	return alive;
}

void Student::setAlive(bool alive) {
	this->alive = alive;
}

double Student::getMark() {
	return mark;
}

void Student::setMark(int mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}

char Student::getGender() {
	return gender;
}

void Student::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}


string Student::toString() {
	string s = firstname;
	s += " " + surname + ".";
	s += ", age = " + to_string(age);
	s += ", class = " + to_string(_class);
	s += ", gender = " + to_string(gender);
	s += ", is alive - ";
	s += (alive ? "yes" : "no");
	s += ", average mark = " + to_string(mark);
	return s;
}