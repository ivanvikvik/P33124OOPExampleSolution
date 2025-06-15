#pragma once
#include "main.h"

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
	Student() : Student("no name", "no surname"){ }
	Student(string firstname, string surname) : firstname(firstname),
		surname(surname), age(0), _class(0), gender('m'), alive(false),
		mark(0), size(0), subjects(nullptr) {
		//cout << "constructor with arguments" << endl;	
	}

	Student(string firstname, string surname, int age) : Student(firstname,
		surname, age, 0, 'm', true, 4, 0, nullptr) {
		//cout << "constructor with arguments" << endl;
	}

	Student(string firstname, string surname, int age, int _class,
		char gender, bool alive, double mark, int size, string* subjects);

	Student(const Student& student) : Student(student.firstname,
		student.surname, student.age, student._class, student.gender,
		student.alive, student.mark, student.size, student.subjects) {
		//cout << "canonical constructor" << endl;
	}

	~Student();

	string getFirstName();
	void setFirstName(const string firstname);
	string getSurname();
	void setSurname(const string surname);
	int getAge();
	void setAge(int age);
	int getClass();
	void setClass(int _class);
	bool isAlive();
	void setAlive(bool alive);
	double getMark();
	void setMark(int mark);
	char getGender();
	void setGender(char gender);

	string toString();
};