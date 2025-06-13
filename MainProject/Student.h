#pragma once
#include "main.h"

// KISS & DRY

// entity-class
class Student {
private:
	string firstname;
	string surname;
	int age;
	int _class;
	char gender;
	bool alive;
	double mark;
	int size;
	string* subjects;

public:
	// default-constructor or constructor without arguments
	// (конструктор по умолчани)
	Student() : Student("no name", "no surname") {
		//cout << "default-constructor" << endl;
	}

	// constructor with arguments (конструкторы с параметрами)
	Student(string firstname, string surname) : firstname(firstname),
		surname(surname), age(0), _class(0), gender('m'), alive(false),
		mark(0), size(0), subjects(nullptr) {
		//cout << "constructor with arguments" << endl;	
	}

	Student(string firstname, string surname, int age) : Student(firstname,
		surname, age, 0, 'm', true, 4, 0, nullptr) {
		//cout << "constructor with arguments" << endl;
	}

	// canonical constructor (канонический конструктор)
	Student(string firstname, string surname, int age, int _class,
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

	// copy-constructor (конструктор-копирования)
	Student(const Student& student) : Student(student.firstname,
		student.surname, student.age, student._class, student.gender,
		student.alive, student.mark, student.size, student.subjects) {
		//cout << "canonical constructor" << endl;
	}

	~Student() {
		// cout << "destructor" << endl;
		if (subjects != nullptr) {
			delete[] subjects;
		}
	}

	string getFirstName() {
		return firstname;
	}

	void setFirstName(string firstname) {
		this->firstname = firstname;
	}

	string getSurname() {
		return surname;
	}

	void setSurname(string surname) {
		this->setSurname = surname;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		if (age > 0) {
			this->age = age;
		}
	}

	int getClass() {
		return _class;
	}

	void setClass(int _class) {
		if (_class >= 1 && _class <= 11) {
			this->_class = _class;
		}
	}

	// getter
	bool isAlive() {
		return alive;
	}

	void setAlive(bool alive) {
		this->alive = alive;
	}

	double getMark() {
		return mark;
	}

	void setMark(int mark) {
		if (mark >= 0 && mark <= 10) {
			this->mark = mark;
		}
	}

	string toString() {
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
};