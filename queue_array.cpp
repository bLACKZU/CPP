#include <iostream>
#include "Queue.h"

bool Queue::isEmpty() const 
{
	if(floor == -1 && top == -1)
		return true;
	return false;
}
	
bool Queue::enQueue(const int &value)  
{
	if(floor == cap)
		floor = -1;
	else
		arr[++floor] = value;
		return true;
}

int Queue::deQueue() 
{
	if(top == cap)
		top = -1;	
	return arr[++top];
}	
	
int Queue::peek() const
{
	if(top == cap)
		std::cout << "No Peek" << std::endl;
	return arr[top + 1];
}

int main()
{
	int size = 0, el = 0, ch = 0;
	std::cout << "Enter the desired Queue size" << std::endl;
	std::cin >> size;
	Queue q(size);
	do{
		std::cout << "			~MENU~			" << std::endl;
		std::cout << "1->Enqueue\n" << "2->Dequeue\n"  << "3->Peek\n" << "4->Exit" << std::endl;
		std::cout << "Please enter your choice" << std::endl;
		std::cin >> ch;
		switch(ch)
		{
			case 1 : std::cout << "Enter the element you want to enqueue" << std::endl;
					 std::cin >> el;
					 if(q.enQueue(el))
						std::cout << "Enqueued Successfully!" << std::endl;						 
					 else
						 std::cout << "Element couldn't be enqueued" << std::endl;
					 break;
					 
			case 2 : if(!q.isEmpty())
						std::cout << q.deQueue() << std::endl;
					 else
						 std::cout << "Empty Queue! Operation aborted." << std::endl;
					 break;
						
			case 3 : if(q.isEmpty())
						std::cout << "Empty Queue! Operation aborted." << std::endl;
					 else
						std::cout << q.peek() << std::endl;
			
			case 4 : 
					 break;
					
			
			default : std::cout << "Invalid choice" << std::endl;
		}
	}
	while(ch != 4);
	std::cout << "THANK YOU" << std::endl;	
	
	
}	
	
	
	