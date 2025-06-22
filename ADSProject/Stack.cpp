#include "Stack.h"

Stack::~Stack() {}

void Stack::push(int number) {
	if (isEmpty()) {
		size = 1;
		numbers = new int[size];
		numbers[0] = number;
	}
	else {
		size++;
		int* temp = new int[size];

		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = numbers[i];
		}
		temp[size - 1] = number;

		delete[] numbers;
		numbers = temp;
	}
}

int Stack::pop() {
	if (!isEmpty()) {
		size--;
		int* temp = new int[size];
		int number = numbers[size];

		for (int i = 0; i < size; i++)
		{
			temp[i] = numbers[i];
		}

		delete[] numbers;
		numbers = temp;
		return number;
	}

	return 0;
}

int  Stack::head() {
	return numbers[size - 1];
}

bool Stack::isEmpty() {
	return size == 0;
}

void Stack::clear() {
	if (!isEmpty()) {
		delete[] numbers;
		size = 0;
	}
}

int  Stack::getSize() {
	return size;
}

string Stack::toString() {
	if (isEmpty()) {
		return "Stack is empty.";
	}

	string s = "";

	for (int i = size - 1; i >= 0; i--)
	{
		s += to_string(numbers[i]) + " ";
	}

	return s;
}