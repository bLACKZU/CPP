//single_linked_list.h

#ifndef SINGLE_LINKED_LIST_
#define SINGLE_LINKED_LIST_

struct Node
{
	int info;
	Node *next;
};

typedef struct Node NODE;
typedef NODE* NPTR; // NODE* NPTR - NODE* is a pointer to struct node

bool isEmpty(NODE);
NPTR createNode(int&);
void insertFront(NPTR&, const int&, NPTR&);
void insertEnd(NPTR&, const int&, NPTR&);
int countNode(NPTR);
void delFirst(NPTR&);
void delEnd(NPTR&, NPTR&);
//void concatList(NPTR&, const int&, NPTR&, NPTR&, NPTR&);
void displayList(NODE);
void delList(NODE&);
void insertNodePos(NODE&, const int&);

#endif
