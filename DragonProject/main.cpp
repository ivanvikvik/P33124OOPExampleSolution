#include "dragon.h"

int main() {
	int age;
	
	do {
		cout << "Input the dragon age: ";
		cin >> age;
	} while (age <= 0);

	Dragon dragon(age);

	cout << "Dragon has " << dragon.getHead() << " heads." << endl;
	cout << "Dragon has " << dragon.getEye() << " eyes." << endl;

	dragon.setAge(301);

	cout << "Dragon has " << dragon.getHead() << " heads." << endl;
	cout << "Dragon has " << dragon.getEye() << " eyes." << endl;

	return 0;
}