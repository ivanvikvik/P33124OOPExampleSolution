#include "Student.h"

class Manager {
public:
	const int MAX_MARK = 10;
	const int MIN_MARK = 4;

	// O(N)
	Student findBestStudent(Student* students, int size) {
		for (int i = 0; i < size; i++)
		{
			if (students[i].mark == MAX_MARK) {
				return students[i];
			}
		}

		return Student();
	}

	Student findWorstStudent(Student* students, int size) {
		for (int i = 0; i < size; i++)
		{
			if (students[i].mark == MIN_MARK) {
				return students[i];
			}
		}

		return Student();
	}

	double calculateAverageMark(Student* students, int size) {
		double avg = 0;

		for (int i = 0; i < size; i++)
		{
			avg += students[i].mark;
		}

		return avg / size;
	}

};