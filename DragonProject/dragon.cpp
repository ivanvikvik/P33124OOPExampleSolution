#include "dragon.h"

void Dragon::calculateHeads() {
	if (age <= 0) {
		return;
	}

	head = 3;

	if (age <= 200) {
		head += age * 3;
	}
	else if (age <= 300) {
		head += 200 * 3 + (age - 200) * 2;
	}
	else {
		head += 200 * 3 + 100 * 2 + (age - 300) * 1;
	}
}

Dragon::Dragon(int age) : age(age) {
	calculateHeads();
}

int Dragon::getAge() {
	return age;
}

void Dragon::setAge(int age) {
	if (age > 0) {
		this->age = age;
		calculateHeads();
	}
}

int Dragon::getHead() {
	return head;
}

int Dragon::getEye() {
	return 2 * head;
}

string Dragon::toString() {
	return "";
}