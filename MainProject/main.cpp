#include "Initializer.h"
#include "Manager.h"
#include "Worker.h"

int main() {
	//Human human;
	//Student student;
	// 1) Worker worker;
	// 2) Worker* worker = new Worker;
	// 3) Human* human = new Worker;
	//    Human* human = new Student;

	Human* humans = new Human[4]{ Student(), Student(), Student(), Worker() };

	for (int i = 0; i < 4; i++)
	{
		cout << humans[i].toString() << endl;
	}


	
	return 0;
}