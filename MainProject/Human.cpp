#include "Human.h"

Human::Human() : Human("", "", 0, '\0', false) { }

Human::Human(string firstname, string surname, int age, char gender,
	bool alive) {
	//cout << "canonical constructor" << endl;
	this->setFirstName(firstname);
	this->setSurName(surname);
	this->setAge(age);
	this->setAge(gender);
	this->setAlive(alive);
}

Human::~Human() {
	//...
}

string Human::getFirstName() {
	return firstname;
}

void Human::setFirstName(string firstname) {
	this->firstname = firstname;
}

string Human::getSurName() {
	return surname;
}

void Human::setSurName(string surname) {
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
	string s = firstname;
	s += " " + surname + ".";
	s += ", age = " + to_string(age);
	s += ", gender = " + to_string(gender);
	s += ", is alive - ";
	s += (alive ? "yes" : "no");
	return s;
}