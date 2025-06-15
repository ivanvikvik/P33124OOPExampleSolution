#include "Manager.h"


Student Manager::findBestStudent(Student* students, int size) {
	for (int i = 0; i < size; i++)
	{
		if (students[i].getMark() == MAX_MARK) {
			return students[i];
		}
	}

	return Student();
}

Student Manager::findWorstStudent(Student* students, int size) {
	for (int i = 0; i < size; i++)
	{
		if (students[i].getMark() == MIN_MARK) {
			return students[i];
		}
	}

	return Student();
}

double Manager::calculateAverageMark(Student* students, int size) {
	double avg = 0;

	for (int i = 0; i < size; i++)
	{
		avg += students[i].getMark();
	}

	return avg / size;
}
