#include <iostream>
#include <cstddef>
#include <climits>
#include "Stack.h"



	
			bool Stack::isEmpty() const
			{
				if(top == -1)
					return true;
				else
					return false;				
			}
						
			bool Stack::push(const int &el) const
			{
				if(top >= cap - 1)
					return false;
				else
				{
					arr[++top] = el;
					return true;
				}
			}
			
			int Stack::pop() const
			{
				return arr[--top];
			}
			
			int Stack::peek() const
			{
				return arr[top];
			}	
						
			~Stack()
			{
				delete [] arr;				
			}
			


int main()
{
	int size = 0, el = 0, ch = 0;
	std::cout << "Enter the desired stack size" << std::endl;
	std::cin >> size;
	Stack a(size);
	do{
		std::cout << "			~MENU~			" << std::endl;
		std::cout << "1->PUSH\n" << "2->POP\n"  << "3->PEEK\n" << "4->EXIT" << std::endl;
		std::cout << "Please enter your choice" << std::endl;
		std::cin >> ch;
		switch(ch)
		{
			case 1 : std::cout << "Enter the element you want to push" << std::endl;
					 std::cin >> el;
					 if(a.push(el))
						std::cout << "Pushed Successfully!" << std::endl;						 
					 else
						 std::cout << "Stack overflow" << std::endl;
					 break;
					 
			case 2 : if(!a.isEmpty())
						std::cout << a.pop() << std::endl;
					 else
						 std::cout << "Empty stack! Operation aborted." << std::endl;
					 break;
						
			case 3 : if(a.isEmpty())
						std::cout << "Empty stack! Operation aborted." << std::endl;
					 else
						std::cout << a.peek() << std::endl;
			
			case 4 : 
					 break;
					
			
			default : std::cout << "Invalid choice" << std::endl;
		}
	}
	while(ch != 4);
	std::cout << "THANK YOU" << std::endl;	
	
	
}	
			
			