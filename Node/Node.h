#ifndef _NODE_H
#define _NODE_H

struct Node {
	int value;
	Node* next;
};

Node* create_node(int value, Node* next = nullptr);   //������� ������ ����� ����
Node* find(Node* head, int value);                    //������� ������� ������� value = value

void push_back(int value, Node*& head);               //������� ��������� ����� ��������� �� ��������� value � ����� ������ head
void push_front(int value, Node*& head);              //������� ��������� ����� ��������� �� ��������� value � ������ ������ head

void print(Node* head);                               //�������� ������ head 

void remove(Node*& head, Node* target);               //������� �� ������ ������� target
void insert(Node*& head, Node* target, int value);    //�������� ������� �� ��������� target

void free_nodes(Node*& head);                         //����������� ������  



//��
void reverse(Node*& head);                            //������������� ������(���� 123 - ����� 321)
Node* merge(Node*& first, Node* second);              //������� ��������������� �������(������ ������: 1 3 5 8
													  //������ ������: 4 10 12
													  //return 1 3 4 5 8 10 12

#endif

