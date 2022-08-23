#ifndef _NODE_H
#define _NODE_H

struct Node {
	int value;
	Node* next;
};

Node* create_node(int value, Node* next = nullptr);   //Функция создаёт новый узел
Node* find(Node* head, int value);                    //Функция находит элемент value = value

void push_back(int value, Node*& head);               //Функция добалвяет новый указатель со значением value в конец списка head
void push_front(int value, Node*& head);              //Функция добавляет новый указатель со значением value в начало списка head

void print(Node* head);                               //Печатает список head 

void remove(Node*& head, Node* target);               //Удалить из списка элемент target
void insert(Node*& head, Node* target, int value);    //Вставить элемент за элементом target

void free_nodes(Node*& head);                         //Освобождает память  



//ДЗ
void reverse(Node*& head);                            //Разворачивает список(было 123 - стало 321)
Node* merge(Node*& first, Node* second);              //Слияние отсортированных списков(Первый список: 1 3 5 8
													  //Второй список: 4 10 12
													  //return 1 3 4 5 8 10 12

#endif

