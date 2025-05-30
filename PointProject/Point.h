#pragma once
#include <iostream>
#include <string>
using namespace std;


// generic-class
class Point2D {
public:
	int x;
	int y;

	string getQuarter() {
		string msg = "in IV-quarter";

		if (x == 0 && y == 0) {
			msg = "in the center";
		}
		else if (y == 0) {
			msg = x > 0 ? "on the x-right-line" : "on the x-left-line";		
		}
		else if (x == 0) {
			msg = y > 0 ? "on the y-up-line" : "on the y-down-line";
		}
		else if (x > 0 && y > 0) {
			msg = "in I-quarter";
		}
		else if (x < 0 && y > 0) {
			msg = "in II-quarter";
		}
		else if (x < 0 && y < 0) {
			msg = "in III-quarter";
		}
		
		return msg;
	}
};


