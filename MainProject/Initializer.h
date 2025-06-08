#pragma once
#include "Student.h"

// functional class
class Initializer {
public:
	void init(Student* students, int size) {
		const int NAME_SIZE = 10;
		
		const string NAMES[]{ "Alex", "Danik", "Max", "Nikita", "Arseniy",
		"Arina", "Lina", "Anton", "Vera", "Ivan" };

		const int ALFABET_SIZE = 26;
		const string ALFABET = "QWERTYUIOPASDFGHJKLZXCVBNM";

		int maxAge = 18;
		int minAge = 13;

		int maxMark = 10;
		int minMark = 4;

		int maxClass = 11;
		int minClass = 7;

		for (int i = 0; i < size; i++)
		{
			Student temp;
			temp.firstname = NAMES[rand() % NAME_SIZE];
			temp.surname = ALFABET[rand() % ALFABET_SIZE];
			temp.alive = true;
			temp.age = rand() % (maxAge - minAge + 1) + minAge;
			temp.mark = rand() % (maxMark - minMark + 1) + minMark;
			temp._class = rand() % (maxClass - minClass+ 1) + minClass;
			temp.size = 0;
			temp.subjects = nullptr;
			temp.gender = 'm';

			students[i] = temp;
		}
	}
};