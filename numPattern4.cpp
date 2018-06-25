
/*

1
23
456
78910
1112131415

*/
#include <iostream>
int main()
{
	int rows, count = 0;
	std::cout << "Please enter the number of rows" << std::endl;
	std::cin >> rows;
	for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			count++;
			std::cout << count;
		}
		std::cout << "\n";
	}
}	