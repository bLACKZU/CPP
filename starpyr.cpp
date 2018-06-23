
/*
    *
   * *  
  * * *
* * * * *

*/

#include <iostream>
int main()
{
	int rows = 0;
	std::cout << "Enter the number of rows" << std::endl;
	std::cin >> rows;
	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= rows - i; j++)
		{
			std::cout << " ";
		}
		for(int k = 1; k <= i; k++)
		{
			std::cout << "* ";
		}
		std::cout << "\n";
	}
}	