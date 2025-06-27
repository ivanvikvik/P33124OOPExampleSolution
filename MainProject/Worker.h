#pragma once
#include "Human.h"

class Worker : public Human
{
private:
	double salary;

public:
	Worker();
	Worker(string firstname, string surname, int age, char gender,
		bool alive, double salary);
	~Worker();

	double getSalary();
	void setSalary(double salary);
	string toString();
};

