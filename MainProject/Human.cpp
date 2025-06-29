#include "Human.h"

Human::Human() : Human("", "", 0, '\0', false) {
	cout << "Constructor of class Human." << endl;
}

Human::Human(string firstname, string surname, int age, char gender,
	bool alive) {
	//cout << "canonical constructor" << endl;
	this->setFirstname(firstname);
	this->setSurname(surname);
	this->setAge(age);
	this->setGender(gender);
	this->setAlive(alive);
}

Human::~Human() {
	cout << "Destructor of class Human." << endl;

	//...
}

string Human::getFirstname() {
	return firstname;
}

void Human::setFirstname(string firstname) {
	this->firstname = firstname;
}

string Human::getSurname() {
	return surname;
}

void Human::setSurname(string surname) {
	this->surname = surname;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 0) {
		this->age = age;
	}
}

// getter
bool Human::isAlive() {
	return alive;
}

void Human::setAlive(bool alive) {
	this->alive = alive;
}

char Human::getGender() {
	return gender;
}

void Human::setGender(char gender) {
	if (gender == 'm' || gender == 'f') {
		this->gender = gender;
	}
}

string Human::toString() {
	/*string s = firstname;
	s += " " + surname + ".";
	s += ", age = " + to_string(age);
	s += ", gender = " + to_string(gender);
	s += ", is alive - ";
	s += (alive ? "yes" : "no");
	return s;*/
	return "Human";
}