#include "Student.h"

int main() {
	Student st1;
	/*Student st2("Alex", "Chichikov");
	Student st3("Ivan", "Ivanov", 15);
	Student st4("Olya", "Sidorova", 14, 8, 'f', true, 9);
	Student st5(st4);

	st1.firstname = "Alex";*/

	cout << st1.toString() << endl;
	/*cout << st2.toString() << endl;
	cout << st3.toString() << endl;
	cout << st4.toString() << endl;*/

	// st1.toString() --> Student.toString(st1)
	// st2.toString()-- > Student.toString(st2)
	// st3.toString()-- > Student.toString(st3)


	return 0;
}