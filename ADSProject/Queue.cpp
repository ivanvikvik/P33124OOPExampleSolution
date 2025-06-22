#include "Queue.h"

Queue::~Queue() { }

void Queue::enqueue(int number) {
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
int  Queue::dequeue() {
	if (!isEmpty()) {
		int number = numbers[0];

		int* temp = new int[size - 1];

		for (int i = 1; i < size; i++)
		{
			temp[i - 1] = numbers[i];
		}

		delete[] numbers;
		numbers = temp;

		return number;
	}
	return 0;
}

int  Queue::head() {
	return numbers[0];
}

bool Queue::isEmpty() {
	return size == 0;
}

void Queue::clear() {
	if (!isEmpty()) {
		delete[] numbers;
	}
}

int  Queue::getSize() {
	return size;
}

string Queue::toString() {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(numbers[i]) + " ";
	}
}
