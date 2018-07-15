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
NPTR createNode(const int&);
void insertFront(NODE&, const int&, NODE&);
void insertEnd(NODE&, const int&, NODE&);
int countNode(NODE);
void delFirst(NODE&);
void delEnd(NODE&, NODE&);
void copyList(NODE&);
int searchEl(NODE, const int&); // search a node
void insertPos(NODE, const int &, const int &);
void insertAfterx(NODE, const int&, const int&);
void delPos(NODE, const int&);
void deleteAfterx(NODE, const int&);
//void concatList(NPTR&, const int&, NPTR&, NPTR&, NPTR&);
void swapEl(NODE&, int&, int&);
void revList(NODE);
void display(NODE);
void delList(NODE&);
void insertNodePos(NODE&, const int&);

#endif
