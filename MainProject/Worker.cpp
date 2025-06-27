#include "Worker.h"

Worker::Worker() : Worker("","", 0,'\0', false, 0) { }

Worker::Worker(string firstname, string surname, int age, char gender,
	bool alive, double salary) {
	//cout << "canonical constructor" << endl;
	this->setFirstName(firstname);
	this->setSurName(surname);
	this->setAge(age);
	this->setAge(gender);
	this->setAlive(alive);
	this->salary = salary;
}

Worker::~Worker() {
	//...
}

double Worker::getSalary() {
	return salary;
}

void Worker::setSalary(double salary) {
	if (salary > 0) {
		this->salary = salary;
	}
}

string Worker::toString() {
	string s = getFirstName();
	s += " " + getSurName() + ".";
	s += ", age = " + to_string(age);
	s += ", gender = " + to_string(gender);
	s += ", is alive - ";
	s += (isAlive() ? "yes" : "no");
	s += ", salary = " + to_string(salary);
	return s;
}
