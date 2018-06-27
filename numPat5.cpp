/*

     1
    232
   34543
  4567654
                                                                                                                                                                       
*/

#include <iostream>
int main()
{
	int rows, j, i, l, copy = 0;
	std::cout << "Please enter the number of rows" << std::endl;
	std::cin >> rows;
	int row = rows;
	for(i = 1, j = 0; i <= row, j < row; i++, j++)
	{
		for(int k = rows; k > 1; k--)
		{
			std::cout << " ";
		}
		
		for(l = i; l <= i + j; l++)
		{
			
			std::cout << l;
		}
		
		rows = rows - 1;
		copy = l - 2;		
		
		for(int m = copy; m >= i; m--)
		{
			std::cout << m;
		}	
		std::cout << "\n";
	}
}	
	