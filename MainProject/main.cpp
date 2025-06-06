#include "Initializer.h"

int main() {
	int size;

	cout << "Input size of students: ";
	cin >> size;

	Student* students = new Student[size];

	Initializer initializer;

	initializer.init(students, size);

	for (int i = 0; i < size; i++)
	{
		cout << students[i].toString() << endl;
	}

	delete[] students;
	
	return 0;
}