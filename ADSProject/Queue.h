#pragma once
#include "main.h"

// FIFO - first input first output
class Queue
{
private:
	int* numbers;
	int size;
public:
	Queue() : numbers(nullptr), size(0) { }
	~Queue();

	void enqueue(int number);	// add
	int dequeue();				// remove
	int head();
	bool isEmpty();
	void clear();
	int getSize();

	string toString();
};

