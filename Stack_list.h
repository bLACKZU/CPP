//Stack_list.h
#ifndef STACK_LIST_H_
#define STACK_LIST_H_

struct Node
{
	int info;
	Node *next;
};

typedef struct Node NODE;
typedef NODE* NPTR; 

bool isEmpty(NODE&);
NPTR createNode(const int &value);
void push(NODE&, const int&, NODE&);
void pop(NODE&);
int peek(NODE&);
void display(NODE);
//void delStack(NODE&);

#endif



	
