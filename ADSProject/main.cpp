#include "Queue.h"

int main() {
	Queue queue;

	cout << "Input your numbers (0 - for exit):";
	int number;

	do {
		cin >> number;
		if (number != 0) {
			queue.enqueue(number);
		}
	} while (number != 0);
	
	queue.dequeue();
	queue.dequeue();

	cout << "Head: " << queue.head() << endl;
	cout << "Queue elements: " << queue.toString() << endl;

	queue.clear();
	cout << "Queue elements: " <<queue.toString() << endl;

	return 0;
}