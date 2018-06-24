/*

  *
 * *
* * *
 * *
  *
  
*/ 
#include <iostream>
int main()
{
	int rows, count= 0;
	std::cout << "Enter the number of rows." << std::endl;
	std::cin >> rows;
	int const mid = (rows / 2) + 1;
	for(int i = 1; i <= mid; i++)
	{
		for(int j = 1; j <= mid - i; j++)
		{
			std::cout << " ";
		}
		for(int k = 1; k <= i; k++)
		{
			std::cout << "* ";
		}
		std::cout << "\n";
	}	
	for(int l = mid + 1; l <= rows; l++)
	{
		count++;
		for(int m = l; m > mid; m--)
		{
			
			std::cout << " ";
		}
		for(int n = l; n > 2*count; n--)
		{
	
			std::cout << "* ";
		}
		std::cout << "\n";
	}
}	