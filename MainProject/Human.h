#pragma once
#include "main.h"

class Human
{
private:
	//...
	
protected:
	int id = 1;
	string firstname;
	string surname;
	int age;
	char gender;
	bool alive;

public:
	Human();
	Human(string firstname, string surname, int age, char gender,
		bool alive);
	~Human();

	string getFirstname();
	void setFirstname(string firstname);
	string getSurname();
	void setSurname(string surname);
	int getAge();
	void setAge(int age);
	char getGender();
	void setGender(char gender);
	bool isAlive();
	void setAlive(bool alive);	
	string toString();
};

