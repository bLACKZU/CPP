#include <iostream>
#include <random>
#include <ctime>

int main()
{
	int size = 0;
	char ch;
	std::cout << "Enter the size of the array" << std::endl;
	std::cin >> size;
	int *array = new int[size];
	std::cout << "Enter the array elements" << std::endl;
	for(int i = 0; i < size; i++)
	{
		std::cin >> *(array + i);
	}
	std::mt19937 random(time(0));
	while(1)
	{
		std::cout<<"Enter s to shuffle the list, q to quit."<< std::endl;
		std::cin >> ch;
		if(ch != 's')
			break;
		for(int i = size - 1; i >= 0; i--)
		{
			std::uniform_int_distribution<int> generate(0, i);
			int index = generate(random);		
			int temp = *(array + i);
			*(array + i) = *(array + index);
			*(array + index) = temp;
			std::cout << "X" << std::endl;
		}
		std::cout << "The shuffled array is" << std::endl;
		for(int i = 0; i < size; i++)
		{
			std::cout << *(array + i) << " ";
		}
		std::cout << "\n";
	}	
	delete [] array;
}	