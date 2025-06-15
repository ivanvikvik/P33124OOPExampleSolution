#include "Student.h"

class Manager {
public:
	const int MAX_MARK = 10;
	const int MIN_MARK = 4;

	// O(N)
	Student findBestStudent(Student* students, int size);
	Student findWorstStudent(Student* students, int size);
	double calculateAverageMark(Student* students, int size);
};