
/*

1
12
123
1234
12345

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
			std::cout << j;
		}
		std::cout << "\n";
	}
}	