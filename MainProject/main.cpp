#include "Student.h"

int main() {
	Student st1;
	Student st2("Alex", "Chichikov");
	Student st3("Ivan", "Ivanov", 15);
	Student st4("Olya", "Sidorova", 14, 8, 'f', true, 9);
	Student st5(st4);

	cout << st1.toString() << endl;
	cout << st2.toString() << endl;
	cout << st3.toString() << endl;
	cout << st4.toString() << endl;

	return 0;
}