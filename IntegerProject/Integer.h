#pragma once
#include <iostream>
using namespace std;

class Integer
{
private:
	int value;

public:
	Integer() : value(0){ }
	Integer(int value) : value(value) { }

	Integer add(Integer number);	// + 
	Integer sub(Integer number);	// -
	Integer mul(Integer number);	// *
	Integer div(Integer number);	// /
	Integer mod(Integer number);	// %
	Integer minus();				// unary -
	Integer increment();			// unary ++
	Integer decrement();			// unary --

	int getValue();
	void setValue(int value);

};

