#include <iostream>
#include "Stack_list.h"

bool isEmpty(NPTR &stack)
{
	if(stack = nullptr)
		return true;
	return false;
}

NPTR createNode(const int &value)
{
	NPTR pStack = new NODE;
	pStack->info = value;
	pStack->next = nullptr;
	return pStack;
}
	
void push(NPTR &stack, const int &value, NPTR &lastNode)
{
	NPTR newNode = createNode(value);
	if(isEmpty(stack))
	{
		stack = newNode;
		lastNode = newNode;
		return;
	}
	newNode->next = stack;
	stack = newNode;
}

void pop(NPTR &stack)
{
	NPTR delNode = nullptr;
	if(isEmpty(stack))
	{
		std::cout << "Empty Stack! Nothing to delete" << std::endl;
		return;
	}
	/*if(countNode(stack) == 1)
	{
		delete stack;
		stack = nullptr;
		return;
	}*/	
	delNode = stack;
	stack = stack->next;
	delete delNode;
	delNode = nullptr;
}

int peek(NPTR &stack)
{
	return stack->info;
}

void display(NPTR stack)
{
	if(isEmpty(stack))
	{
		std::cout << "Stack is empty" << std::endl;
		return;
	}
	while(stack != nullptr)
	{
		std::cout << stack->info << " ";
		stack = stack->next;
	}
	std::cout << "\n";	
}

int main()
{
	int value, ch, peekEl = 0;
	NPTR stack = nullptr;
	NPTR lastNode = nullptr;
	do
	{
		std::cout << "~ M E N U ~" << std::endl;
		std::cout << "1. Push an element" << std::endl;
		std::cout << "2. Pop an element" << std::endl;
		std::cout << "3. Display the peek element" << std::endl;
		std::cout << "4. Display the Stack" << std::endl;
		std::cout << "5. Exit" << std::endl;
		std::cout << "Enter your choice" << std::endl;
		std::cin >> ch;
		
		switch(ch)
		{
			case 1 : std::cout << "Enter the element you want to push" << std::endl;
					 std::cin >> value;
					 push(stack, value, lastNode);
					 break;
			
			case 2 : pop(stack);
					 break;
					
			case 3 : peekEl = peek(stack);	
					 std::cout << "The peek element is " << peekEl << std::endl;
					 break;
				
			case 4 : display(stack);
					 break;
					 
			case 5 : break;

			default : std::cout << "Invalid Choice" << std::endl;
		}
	}while(ch != 5);
	std::cout << "Thank You !" << std::endl;
}			