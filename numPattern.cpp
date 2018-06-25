

/*
   1
  2 2
 3 3 3
4 4 4 4

*/
#include <iostream>

int main()
{
	int rows = 0;
	std::cout << "Enter the number of rows" << std::endl;
	std::cin >> rows;
	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j < rows - i; j++)
		{
			std::cout << " ";
		}
		for(int k = 1; k <= i; k++)
		{
			std::cout << i << " ";
		}
		std::cout << "\n";
	}
}	
	