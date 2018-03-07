#include <iostream>

int main()
{
	int size = 0, i = 0,j = 0, min = 0, temp = 0;
	std::cout << "Please enter the size of the array:" << std::endl;
	std::cin >> size;
	int *list = new int[size];
	std::cout << "Kindly enter the array elements" << std::endl;
	for(i = 0; i < size; i++)
	{
		std::cin >> list[i];
	}
	for(i = 0; i < size - 1; i++)
	{
		min = i;
	for(j = i + 1; j < size; j++)
	{
		if(list[j] < list[min])
			{
				min = j;
			}
	}	
	temp = list[i];
	list[i] = list[min];
    list[min] = temp;
	}
	std::cout << "The sorted array is" << std::endl;
	for(i = 0; i < size; i++)
	{
		std::cout << list[i] << std::endl;
	}
	int start = 0, end = size - 1, mid = 0, key = 0, pos = 0;
	bool flag = false;
	std::cout << "Enter the element you want to search" << std::endl;
	std::cin >> key; 
	std::cout << key << std::endl;
	
	while(start <= end)
	{
		mid = (start + end) / 2;
		std::cout << mid << std::endl;
		if(list[mid] == key)
		{
			pos = mid;
			flag = true;
		}	
		if(key > list[mid])
			start = mid + 1;
	    if(key < list[mid])
			end = mid - 1;
//	mid = (start + end) / 2;
	}
	if(flag = true)
		std::cout << "The element is found at " << pos << std::endl;
	else
		std::cout << "Element not found" << std::endl;
	
	delete [] list;
}	