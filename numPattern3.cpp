
/*

1
22
333
4444
55555

*/

#include <iostream>
int main()
{
	int rows = 0;
	std::cout << "Please enter the number of rows" << std::endl;
	std::cin >> rows;
	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			std::cout << i;
		}
		std::cout << "\n";
	}
}	