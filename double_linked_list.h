//double_linked_list.h

#ifndef DOUBLE_LINKED_LIST_
#define DOUBLE_LINKED_LIST_

struct Node
{
	int info;
	Node *next;
	Node *prev;
};

typedef struct Node NODE;
typedef NODE* NPTR; // NODE* NPTR - NODE* is a pointer to struct node

bool isEmpty(NODE&);
NPTR createNode(const int&);
void insertFront(NODE&, const int&, NODE&);
void insertEnd(NODE&, const int&, NODE&);
int countNode(NODE);
void delFront(NODE);
void delEnd(NODE&, NODE&);
void display(NODE);
void revDisplay(NODE);

#endif