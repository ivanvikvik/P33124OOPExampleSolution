#include "Group.h"

class Manager {
public:
	const int MAX_MARK = 10;
	const int MIN_MARK = 4;

	// O(N)
	Student findBestStudent(Group group);
	Student findWorstStudent(Group group);
	double calculateAverageMark(Group group);
};