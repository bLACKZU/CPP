//polyAdd_list.h

#ifndef POLYADD_LIST
#define POLYADD_LIST

struct Node
{
	int coefficient;
	int degree;
	Node* next;
};
	
typedef struct Node NODE;
typedef NODE* NPTR;

bool isEmpty(NODE&);
NPTR createNode(const int&, const int&);
void insertEl(NODE&, const int&, const int&, NODE&);
NPTR polyAdd(NODE&, NODE&, NODE&, NODE&);
//void delList(NPTR&);
void display(NODE&, NODE, NODE, NODE&);

#endif

