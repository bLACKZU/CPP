#include <iostream>
#include "single_linked_list.h"

bool isEmpty(NPTR &list) 
{
	if(list == nullptr)
		return true;
	return false;
}

NPTR createNode(const int &value)
{
	NPTR plist = new NODE;
	plist->info = value;
	plist->next = nullptr;
	return plist;
}

void insertFront(NPTR &list, const int &value, NPTR &lastNode)
{
	NPTR newNode = createNode(value);
	if(isEmpty(list))
	{
		
		list = newNode;
		lastNode = newNode;
		return;
	}
	newNode->next = list;
	list = newNode;
}

void insertEnd(NPTR &list, const int &value, NPTR &lastNode)
{
	NPTR newNode = createNode(value);
	if(isEmpty(list))
	{
		lastNode = newNode;
		list = newNode;
		return;
	}
	lastNode->next = newNode;
	lastNode = newNode;
}

int countNode(NPTR list)
{
	int count = 1;
	while(list != nullptr)
	{
		count++;
		list = list->next;
	}
	return count - 1;
}
/*
void concatList(NPTR &firstList, NPTR &secondList, NPTR &firstLastNode, NPTR &secondLastNode)
{
	int firstval, secondval = 0;
	std::cout << "Please enter the number of elements of first list" << std::endl;
	std::cin >> firstListEl;
	std::cout << "Please enter the number of elements of second list" << std::endl;
	std::cin >> secondListEl;
	if(firstList == nullptr && secondList == nullptr)
	{
		std::cout << "Lists are empty" << std::endl;
		return;
	}
	for(int i = 0; i < firstListEl; i++)
	{
		insertEnd(firstList, value, 
	std::cout << "~Second List~" << std::endl;
	insertEnd(secondlist, value, secondLastNode);
	firstLastNode->next = secondList;
	firstLastNode = secondLastNode;
	std::cout << "The appended list is" << firstList << std::endl; 
}	
*/

void delFirst(NPTR &list)
{
	NPTR delNode = nullptr;
	if(isEmpty(list))
	{
		std::cout << "Empty List! Nothing to delete" << std::endl;
		return;
	}
	if(countNode(list) == 1)
	{
		delete list;
		list = nullptr;
		return;
	}	
	delNode = list;
	list = list->next;
	delete delNode;
	delNode = nullptr;
}	

void delEnd(NPTR &list, NPTR &lastNode)
{
	
	NPTR delNode = nullptr;
	NPTR bak = list;
	if(isEmpty(list))
	{
		std::cout << "Empty List! Nothing to delete" << std::endl;
		return;
	}
	if(countNode(list) == 1)
	{
		
		delete list;
		list = nullptr;
		return;
	}
	while(list->next != lastNode)
	{
		list = list->next;
	}
	list->next = nullptr;
	delNode = lastNode;
	lastNode = list;
	delete delNode;
	delNode = nullptr;
	list = bak;
}	
	
NPTR copyList(NPTR list)
{ 
	if(isEmpty(list))
	{
		std::cout << "Source list is empty!" << std::endl;
		return list;
	}	
	const int head = list->info;
	NPTR secondList = createNode(head);
	if(list->next != nullptr)
		secondList->next = copyList(list->next);
	return secondList;	
}	

int searchEl(NPTR list, const int &value)
{
	int count = 1;
	if(isEmpty(list))
		return 0;
	if(countNode(list) == 1)
		return 1;
	while(list->info != value)
	{
		count++;
		list = list->next;
	}	
	return count++;
}	

void insertPos(NPTR list, const int &value, const int &pos)
{
	int count = 1;
	NPTR newNode = createNode(value);
	NPTR backup = nullptr;
	NPTR prevNode = nullptr;
	if(isEmpty(list))
		std::cout << " Element cannot be inserted. Empty List!" << std::endl;
	while(count != pos - 1)
	{
		count++;
		list = list->next;
	}
	prevNode = list->next;
	list->next = newNode;
	newNode->next = prevNode;
}

void insertAfterx(NPTR list, const int &key, const int &value)
{
	NPTR newNode = createNode(value);
	NPTR temp = nullptr;
	if(isEmpty(list))
		std::cout << "Element cannot be inserted.List is Empty!" << std::endl;
	while(list->info != key)
	{
		list = list->next;
	}
	temp = list->next;
	list->next = newNode;
	newNode->next = temp;
}	

void delPos(NPTR list, const int &pos)
{
	int count = 1;
	NPTR nextNode = nullptr;
	NPTR delNode = nullptr;
	if(isEmpty(list))
		std::cout << " Element cannot be deleted. Empty List!" << std::endl;
	while(count != pos - 1)
	{
		count++;
		list = list->next;
	}
	delNode = list->next;
	nextNode = delNode->next;
	list->next = nextNode;
	delete delNode;
	delNode = nullptr;
}

void deleteAfterx(NPTR list, const int &key)
{
	int counter = countNode(list);
	int valPos = searchEl(list, key);
	const int newPos = valPos + 1;
	if(isEmpty(list))
		std::cout << "Element cannot be deleted. Empty list!" << std::endl;
	if(newPos == -1 || newPos > counter)
		std::cout << "Invalid Position!" << std::endl; 
	delPos(list, newPos);
}	

void swapEl(NPTR &list, const int &firstEl, const int &secondEl)
{
	int firstCount, secondCount = 1;
	int firstPos = searchEl(list, firstEl);
	int secondPos = searchEl(list, secondEl);
	NPTR firstPointer = list;
	NPTR secondPointer = list;
	while(firstCount != firstPos - 1)
	{
		firstPointer = firstPointer->next;
		firstCount++;
	}
	while(secondCount != secondPos)
	{
		secondPointer = secondPointer->next;
		secondCount++;
	}
	std::cout << secondPointer->info;
	int tmp = firstPointer->info;
	firstPointer->info = secondPointer->info;
	secondPointer->info = tmp;
	
}	

NPTR revList(NPTR list)
{
	NPTR prevNode = nullptr;
	NPTR currentNode = list;
	NPTR revList = list;
	NPTR bak = nullptr;
	while(currentNode != nullptr && revList != nullptr)
	{
		bak = currentNode;
		currentNode = currentNode->next;
		revList->next = prevNode;
		prevNode = bak;
		revList = currentNode;
	}
	revList = prevNode;
	return revList;
}		   
		
void display(NPTR list)
{
	
	if(isEmpty(list))
	{
		std::cout << "List is empty" << std::endl;
		return;
	}
	while(list != nullptr)
	{
		std::cout << list->info << " ";
		list = list->next;
	}
	std::cout << "\n";	
}

void delList(NPTR &list)
{
	NPTR delNode = nullptr;
	if(isEmpty(list))
		return;
	while(list != nullptr)
	{
		delNode = list;
		list = list->next;
		delete delNode;
	}
	list = nullptr;
}	
	

int main()
{
	int ch, val, nodeCount, pos, key, firstElement, secondElement, firstListEl, secondListEl = 0;
	NPTR list = nullptr;
	NPTR lastNode = nullptr;
	NPTR secondList = nullptr;
	NPTR firstLastNode = nullptr;
	NPTR secondLastNode = nullptr;
	NPTR reverse = nullptr;
	NPTR copy = nullptr;
	do
	{
		std::cout << "~~~~~~~~~~~~~MENU~~~~~~~~~~~~~" << std::endl;
		std::cout << "1. Insert at front" << std::endl;
		std::cout << "2. Insert at last" << std::endl;
		std::cout << "3. Count the number of nodes" << std::endl;
		//std::cout << "4. Append two linked lists" << std::endl;
		std::cout << "5. Delete from front" << std::endl;
		std::cout << "6. Delete at end" << std::endl;
		std::cout << "7. Search for an element in list" << std::endl;
		std::cout << "8. Insert at any position in list" << std::endl; 
		std::cout << "9. Insert after an element in linked list" << std::endl;
		std::cout << "10. Delete from any position in list" << std::endl;
		std::cout << "11. Delete after an element in linked list" << std::endl;
		std::cout << "12. Swap two data in a node" << std::endl;
		std::cout << "13. Reverse the linked list" << std::endl;
		std::cout << "14. Display the list" << std::endl;
		std::cout << "15. Copy a linked list to another list" << std::endl;
		std::cout << "16. Exit" << std::endl;
		std::cout << "Please enter your choice" << std::endl;
		std::cin >> ch;
		
		switch(ch)
		{
			case 1 : std::cout << "Please enter the value you want to enter" << std::endl;
					 std::cin >> val;
					 insertFront(list, val, lastNode);
					 break;
					 
			case 2 : std::cout << "Please enter the value you want to enter" << std::endl;
					 std::cin >> val;
					 insertEnd(list, val, lastNode);	
					 break;
					 
			case 3 : nodeCount = countNode(list);
					 std::cout << " The number of nodes in the linked list are " << nodeCount << std::endl;
					 break;
					 
			/*case 4 : 
						
						
					 std::cout << "The appended list is" << concatList(list, secondList, firstLastNode, secondLastNode);
				     break;
				*/ 
			case 5 : delFirst(list);
					 break;
					 
			case 6 : delEnd(list, lastNode);
					 break;
			
			case 7 : std::cout << "Please enter the value you want to search for" << std::endl;
					 std::cin >> val;	
					 pos = searchEl(list, val);
					 std::cout << "The element is found at position" << pos << "." << std::endl;
					 break;
					 
			case 8 : std::cout << "Please enter the element you want to insert along with the position" << std::endl;
					 std::cin >> val;
					 std::cin >> pos;
					 insertPos(list, val, pos);
					 break;
					 
			case 9 : std::cout << "Please enter the value of the node" << std::endl;
					 std::cin >> key;
					 std::cout << "Please enter the value to insert" << std::endl;
					 std::cin >> val;
					 insertAfterx(list, key, val);
					 break;
			
			case 10 : std::cout << "Please enter the position of deletion" << std::endl;
					  std::cin >> pos;
					  delPos(list, pos);
					  break;
			
			case 11 : std::cout << "Please enter the value of the node" << std::endl;
					  std::cin >> key;
					  deleteAfterx(list, key);
					  break;
					  
			case 12 : std::cout << "Please enter the two values you want to swap" << std::endl;
					  std::cin >> firstElement >> secondElement;
					  swapEl(list, firstElement, secondElement);
					  break;
			
			case 13 : reverse = revList(list);
					  display(reverse);
					  delList(reverse);
					  break;
					  
			case 14	: display(list);
					  break;
			
			case 15 : copy = copyList(list);
					  display(copy);
					  delList(copy);
					  break;
					 
			case 16 : delList(list);
					  break;
			
			default : std::cout << "Invalid Choice" << std::endl;
		}
	}while(ch != 16);
	std::cout << "Thank You !" << std::endl;
		
		
		
}
			
			
	
	