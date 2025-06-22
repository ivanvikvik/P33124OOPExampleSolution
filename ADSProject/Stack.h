#pragma once
#include "main.h"

// LIFO - Last Input First Output
class Stack
{
private:
	int* numbers;
	int size;
public:
	Stack() : numbers(nullptr), size(0) {}
	~Stack();

	void push(int number);	// add
	int pop();				// remove
	int head();
	bool isEmpty();
	void clear();
	int getSize();

	string toString();
};

