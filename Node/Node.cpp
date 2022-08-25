#include <iostream>

#include "Node.h"

Node* create_node(int value, Node* next) {
	Node* root = new Node;
	root->value = value;
	root->next = next;
	return root;
}

Node* find(Node* head, int value) {
	Node* cur;
	for (cur = head; cur->next != nullptr; cur = cur->next) {
		if (cur->value == value) {
			return cur;
		}
	}
	return nullptr;
}

void push_back(int value, Node*& head) {
	if (!head) {
		head = create_node(value);
		return;
	}
	Node* last = create_node(value);
	Node* it;
	for (it = head; it->next != nullptr; it = it->next);
	it->next = last;
}

void push_front(int value, Node*& head) {
	Node* new_head = create_node(value);
	new_head->next = head;
	head = new_head;

}

void print(Node* head) {
	Node* tmp;
	for (tmp = head; tmp->next != nullptr; tmp = tmp->next) {
		std::cout << tmp->value << " ";
	}
}

void remove(Node*& head, Node* target) {
	Node* prev;
	for (prev = head; prev->next != target; prev = prev->next); //Ищем элемент перед target
	Node* next = target->next;                                  //Ищем элемент после target

	delete target;
	prev->next = next;
}

void insert(Node*& head, Node* target, int value) {
	Node* cur = create_node(value);
	Node* next = target->next;
	target->next = cur;
	cur->next = next;
}

void free_nodes(Node*& head) {
	Node* cur = head;

	while (cur != nullptr) {
		Node* next = cur->next;
		delete cur;
		cur = next;
	}
}

void reverse(Node*& head) {
	Node* new_head = nullptr;
	for (Node* last = head; last;) {
		Node* next = last->next;
		last->next = new_head;
		new_head = last->next;
		last = next;
	}
	head = new_head;
}

Node* merge(Node* first, Node* second) {
	Node* ans = new Node;
	Node* it = ans;

	while (first || second) {
		if (first && (!second || first->value < second->value)) {
			it->value = first->value;
			first = first->next;
		}
		else {
			it->value = second->value;
			second = second->next;
		}
		it->next = (first || second ? new Node : nullptr);
		it = it->next;
	}

	return ans;
}