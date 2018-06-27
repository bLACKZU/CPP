#include <iostream>

int main()
{
	int rows, mid = 0;
	std::cout << "Enter the number of rows" << std::endl;
	std::cin >> rows;
	mid = rows / 2;
	for(int i = 1; i <= rows; i++)
	{
		for(int j = rows; j > i; j--)
		{
			std::cout << " ";
		}
		for(int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}	