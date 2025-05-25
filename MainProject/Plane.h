#include "main.h"

class Plane {
public:
		
	string brand;
	string model;
	double width;
	double length;
	double height;
	int speed;
	int count;
	bool running;

	string toString() {
		string s = "";
		s += brand + " " + model;
		s += "(width = " + to_string(width);
		s += ", height = " + to_string(height);
		s += ", length = " + to_string(length);
		s += ", speed = " + to_string(speed);
		s += ", count of passengers = " + to_string(count);
		s += ", ";
		s += (running ? "working" : "repairing");
		return s;
	}
};