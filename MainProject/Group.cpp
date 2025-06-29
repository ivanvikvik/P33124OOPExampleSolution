#include "Group.h"

Group::Group(Student* students, int size) {
	if (students == nullptr || size <= 0) {
		students = nullptr;
		size = 0;
	}
	else {
		this->size = size;
		this->students = new Student[size];

		for (int i = 0; i < size; i++)
		{
			this->students[i] = students[i];
		}
	}
}

Group::~Group() {
	clear();
}

bool Group::isEmpty() { 
	return size == 0;
}

int Group::getSize() {
	return size;
}

void Group::add(Student student) { 
	add(size - 1, student);
}

//!!!
void Group::add(int index, Student student) { 
	if (isEmpty()) {
		size = 1;
		students = new Student[size];
		students[0] = student;
	}
	else if (index >= 0  && index < size) {
		size++;
		Student* temp = new Student[size];

		for (int i = 0, j = 0; j < size; j++)
		{
			if (i != index) {
				temp[j] = students[i];
				i++;
			}
			else {
				temp[j] = student;
			}
		}

		delete[] students;
		students = temp;
	}
	
}

void Group::remove() { 
	remove(size - 1);
}

void Group::remove(int index) { 
	if (!isEmpty() && index >= 0 && index < size) {
		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = students[i];
				j++;
			}
		}

		size--;
		delete[] students;
		students = temp;
	}
}

void Group::remove(Student student) { 
	if (!isEmpty()) {
		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (!(students[i].getFirstname() == student.getFirstname() 
				&& students[i].getSurname() == student.getSurname()
				&& students[i].getAge() == student.getAge())) {
				temp[j] = students[i];
				j++;
			}
		}

		size--;
		delete[] students;
		students = temp;
	}
}

void Group::clear() { 
	if (!isEmpty()) {
		delete[] students;
	}
}

Student Group::get(int index) { 
	if (!isEmpty() && index >= 0 && index < size) {
		return students[index];
	}

	return Student();
}

void Group::set(int index, Student student) { 
	if (!isEmpty() && index >= 0 && index < size) {
		students[index] = student;
	}
}

string Group::toString() { 
	string s = "";

	if (!isEmpty()) {
		for (int i = 0; i < size; i++)
		{
			s += students[i].toString() + "\n";
		}
	}
	else {
		s = "Group is empty.";
	}

	return s;
}
