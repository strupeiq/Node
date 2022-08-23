
#include <iostream>

#include "Node.h"

int main() {
	srand(time(0));
	Node* head = nullptr;

	for (int i = 1; i <= 40; ++i) {
		push_back(i, head);
	}

	for (int i = 1; i <= 40; ++i) {
		reverse(head);
	}

	/*Node* thirty_three = find(head, 33);
	remove(head, thirty_three);              //Удаление элемента
	*/
	print(head);

	return 0;
}
