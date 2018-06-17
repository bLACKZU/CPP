//Stack.h 

#ifndef STACK_H_
#define STACK_H_

class Stack
{
	public:
			int cap;
			int *arr;
			int top;
			
			Stack(const int &n)
			{
				cap = n;
				arr = new int[cap];
				top = -1;
			}
			bool isEmpty() const;
			bool push() const;
			int peek() const;
			~Stack()
			{
				delete [] arr;				
			}
};
#endif			
	
	
	
	
	
	