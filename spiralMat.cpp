#include <iostream>

int main()
{
	int order = 0, count = 0, i, j = 0;
	bool right, bottom, left, top = false;
	std::cout << "Enter the order of the matrix" << std::endl;
	std::cin >> order;
	int spiral[order][order];
	
	for(i = 0; i < order; i++)
	{
		for(j = 0; j < order; j++)
		{
			spiral[i][j] = 0;
		}
	}
	
	for(i = 0, j = -1, right = true; count != order * order;)
	{
		
		if(right)
		{
			if(j == order - 1 || spiral[i][j + 1] != 0)
			{
				right = left = top = false;
				bottom = true;
				continue;
			}	
			
				
				spiral[i][++j] = ++count;
				
			
		}	
		if(bottom)
		{
			if(i == order - 1 || spiral[i + 1][j] != 0)
			{
				right = top = bottom = false;
				left = true;
				continue;
			}	
			
				
				spiral[++i][j] = ++count;
				
			
		}	
		if(left)
		{	
			if(j == 0 || spiral[i][j - 1] != 0)
			{	
				right = left = bottom = false;
				top = true;
				continue;
			}
			
				
				spiral[i][--j] = ++count;
				
			
		}
		if(top)
		{
			if(i == 0 || spiral[i - 1][j] != 0)
			{
				right = true;
				left = bottom = top = false;
				continue;
			}	
				spiral[--i][j] = ++count;
		}
	}	
	for(i = 0; i < order; i++)
	{
		for(j = 0; j < order; j++)
		{
			std::cout << spiral[i][j] << " ";
		}
		std::cout << "\n";
	}
}	
		