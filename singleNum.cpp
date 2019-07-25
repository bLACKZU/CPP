#include <iostream>
int singleNumber(int*);
int singleNumber(int* lookUp)
{
	
	int i = 0;
	for(i = 0; i < 10; )
	{
		if(lookUp[i] == 1)
			break;
		else
			i++;
	}		
	return i;	
}
int main()
{
	
	int numOfElements;
	std::cout << "Please enter the number of elements" << std::endl;
	std::cin >> numOfElements;
	int arr[numOfElements];
	int lookUp[10] = {0};
	std::cout << "Please enter the elements in the array one after the other" << std::endl;
	for(int i = 0; i < numOfElements; i++)
	{
		std::cin >> arr[i];
		lookUp[arr[i]] = ++lookUp[arr[i]];
	}
	int singleNum = singleNumber(lookUp);
	std::cout << "The single number is " << singleNum << std::endl;;
}	