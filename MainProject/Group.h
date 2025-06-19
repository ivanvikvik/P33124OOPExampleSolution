#pragma once
#include "Student.h"

// DRY, SRP (SOLID), KISS

class Group
{
private:
	Student* students;
	int size;
public:
	Group() : students(nullptr), size(0) { }
	Group(Student* students, int size);
	~Group();

	bool isEmpty();
	int getSize();
	void add(Student student);
	void add(int index, Student student);
	void remove();
	void remove(int index);
	void remove(Student student);
	void clear();
	Student get(int index);
	void set(int index, Student student);

	string toString();

};

