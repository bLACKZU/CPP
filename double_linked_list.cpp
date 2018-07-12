#include <iostream>
#include "double_linked_list.h"

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
	plist->prev = nullptr;
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
	list->prev = nullptr;
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
	newNode->prev = lastNode;
	lastNode->next = newNode;
	lastNode = newNode;
}	

int countNode(NPTR list)
{
	NPTR prevNode = nullptr;
	int count = 1;
	while(list != nullptr)
	{
		list->prev = prevNode;
		prevNode = list;
		list = list->next;
		count++;
	}
	return count - 1;
}	
		
		
void delFront(NPTR &list)
{
	NPTR delNode = nullptr;
	if(isEmpty(list))
	{
		std::cout << "Node cannot be deleted. List is empty" << std::endl;
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
	list->prev = nullptr;
	delete delNode;
}	

void delEnd(NPTR &list, NPTR &lastNode)
{
	NPTR prevNode = nullptr;
	NPTR delNode = nullptr;
	NPTR bak = list;
	if(isEmpty(list))
	{
		std::cout << "Element cannot be deleted. Empty list" << std::endl;
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
		list->prev = prevNode;
		prevNode = list;
		list = list->next;
	} 
	list->prev = prevNode;
	list->next = nullptr;
	delNode = lastNode;
	lastNode = list;
	delete delNode;
	delNode = nullptr;
	list = bak;
}	
		
void delList(NPTR &list)
{
	NPTR delNode = nullptr;
	NPTR prevNode = nullptr;
	if(isEmpty(list))
	{
		std::cout << "List is already empty!" << std::endl;
		return;
	}
	while(list != nullptr)
	{
		delNode = list;
		list->prev = prevNode;
		prevNode = list;
		list = list->next;
		delete delNode;
	}
}	
		
void display(NPTR list)
{
	NPTR prevNode = nullptr;
	if(isEmpty(list))
	{
		std::cout << "List is Empty!" << std::endl;
		return;
	}
	std::cout << "The list is -" << std::endl;
	while(list != nullptr)
	{
		std::cout << list->info << " ";
		list->prev = prevNode;
		prevNode = list;
		list = list->next;
	}
	std::cout << "\n";
}	

void revDisplay(NPTR list, NPTR &lastNode)
{
	NPTR nextNode = nullptr;
	if(isEmpty(list))
	{
		std::cout << "List is Empty!" << std::endl;
		return;
	}
	while(lastNode != nullptr)
	{
		std::cout << lastNode->info << " ";
		/*lastNode->next = nextNode;
		nextNode = lastNode;*/
		lastNode = lastNode->prev;
	}
	lastNode = list;
	std::cout << "\n";
}	

int main()
{
	NPTR list = nullptr;
	NPTR lastNode = nullptr;
	int value, ch, nodes = 0;
	do
	{
		std::cout << "------------M E N U------------" << std::endl;
		std::cout << "1. Insert a node at the beginning of the list" << std::endl;
		std::cout << "2. Insert a node at the end of the list" << std::endl;
		std::cout << "3. Count the number of nodes" << std::endl;
		std::cout << "4. Delete from front of the list" << std::endl;
		std::cout << "5. Delete at the end of the list" << std::endl;
		std::cout << "6. Display the list" << std::endl;
		std::cout << "7. Display the list in reverse order" << std::endl;
		std::cout << "8. Exit" << std::endl;
		std::cout << "Enter your choice" << std::endl;
		std::cin >> ch;
		switch(ch)
		{
			case 1 : std::cout << "Please enter a value" << std::endl;
					 std::cin >> value;
					 insertFront(list, value, lastNode);
					 break;
					 
			case 2 : std::cout << "Please enter a value" << std::endl;
					 std::cin >> value;
					 insertEnd(list, value, lastNode);
					 break;
					 
			case 3 : nodes = countNode(list);
					 std::cout << "The number of nodes are" << " " << nodes << std::endl;
					 break;
			
			case 4 : delFront(list);
					 break;
					 
			case 5 : delEnd(list, lastNode);
					 break;
					 
			case 6 : display(list);
					 break;
			
			case 7 : revDisplay(list, lastNode);
					 break;
					 
			case 8 : delList(list);
					 break;
			
			default : std::cout << "Invalid Choice" << std::endl;
		}
	}while(ch != 8);
		std::cout << "THANK YOU !" << std::endl;
}			
			
			
	
	
	