#include "Plane.h"



int main() {
	// 1)
	Plane plane;

	cout << "Before: ";
	cout << plane.toString() << endl;

	plane.brand = "Boeing";
	plane.model = "474-400";
	plane.height = 15;
	plane.width = 120;
	plane.length = 100;
	plane.count = 700;
	plane.speed = 1000;
	plane.running = true;

	cout << "After: ";
	cout << plane.toString() << endl;


	// 2)
	Plane* ptrPlane = nullptr;
	ptrPlane = new Plane;

	ptrPlane->brand = "Boeing";
	ptrPlane->model = "373-100";
	ptrPlane->height = 11;
	ptrPlane->width = 110;
	ptrPlane->length = 90;
	ptrPlane->count = 350;
	ptrPlane->speed = 1000;
	ptrPlane->running = true;

	cout << ptrPlane->toString() << endl;

	return 0;
}