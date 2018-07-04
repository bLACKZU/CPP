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
		newNode->info = value;
		newNode->next = nullptr;
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

/*void concatList(NPTR &firstList, NPTR &secondList, NPTR &firstLastNode, NPTR &secondLastNode)
{
	int firstval, secondval = 0;
	if(firstList == nullptr && secondList == nullptr)
	{
		std::cout << "Lists are empty" << std::endl;
		return;
	}	
	insertEnd(firstlist, value, firstLastNode);
	std::cout << "~Second List~" << std::endl;
	insertEnd(secondlist, value, secondLastNode);
	firstLastNode->next = secondList;
	firstLastNode = secondList;
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

void delEnd(NPTR list, NPTR &lastNode)
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
	while(list->next != lastNode)
	{
		list = list->next;
	}
	list->next = nullptr;
	delete lastNode;
	lastNode = nullptr;
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
	int ch, val, nodeCount, pos = 0;
	NPTR list = nullptr;
	NPTR lastNode = nullptr;
	NPTR secondList = nullptr;
	NPTR firstLastNode = nullptr;
	NPTR secondLastNode = nullptr;
	NPTR copy = nullptr;
	do
	{
		std::cout << "~~~~~~~~~~~~~MENU~~~~~~~~~~~~~" << std::endl;
		std::cout << "1. Insert at front" << std::endl;
		std::cout << "2. Insert at last" << std::endl;
		std::cout << "3. Count the number of nodes" << std::endl;
		std::cout << "4. Append two linked lists" << std::endl;
		std::cout << "5. Delete from front" << std::endl;
		std::cout << "6. Delete at end" << std::endl;
		std::cout << "7. Search for an element in list" << std::endl;
		std::cout << "8. Insert at any position in list" << std::endl; 
		std::cout << "9. Display the list" << std::endl;
		std::cout << "10. Copy a linked list to another list" << std::endl;
		std::cout << "11. Exit" << std::endl;
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
					 
			/*case 4 : std::cout << "~First List~" << std::endl;
						
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
					 std::cout << "The element is found at " << pos << " position " << "." << std::endl;
					 break;
					 
			case 8 : std::cout << "Please enter the element you want to insert along with the position" << std::endl;
					 std::cin >> val;
					 std::cin >> pos;
					 insertPos(list, val, pos);
					 break;
					  
			case 9	: display(list);
					  break;
			
			case 10 : copy = copyList(list);
					 display(copy);
					 delList(copy);
					 break;
					 
			case 11 : delList(list);
					 break;
			
			default : std::cout << "Invalid Choice" << std::endl;
		}
	}while(ch != 11);
	std::cout << "Thank You !" << std::endl;
		
		
		
}
			
			
	
	