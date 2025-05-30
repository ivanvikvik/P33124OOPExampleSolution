#include "Point.h"

int main() {
	Point2D point1;

	cout << "Input x and y: ";
	cin >> point1.x >> point1.y;

	cout << "Point is " << point1.getQuarter() << ".\n";

	system("pause");

	return 0;
}