//Queue.h - Queue class interface

#ifndef QUEUE_H_
#define QUEUE_H_

class Queue
{
	public:
			int cap;
			int *arr;
			int floor;
			int top;
			
			Queue(const int &c)
			{
				cap = c;
				arr = new int[cap];
				floor = -1;
				top = -1;
			}
			bool isEmpty() const;
			bool enQueue(const int&);
			int deQueue();
			int peek() const;
			~Queue()
			{
				delete [] arr;
			}

};

#endif