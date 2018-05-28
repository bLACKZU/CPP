#include <iostream>

int main()
{
	int n = 0, j = 0, k = 0, i = 0, numsum = 0, prop_dsum = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> n;
	for(k = 1; k <= 10000; k++)
	{
		for(i = 1; i < n; i++)
		{
			if(n % i == 0)
			{
				numsum += i;
			}
		}	
		for(j = 1; j < numsum; j++)
		{
			if(numsum % j == 0)
			{
				prop_dsum += j;
			}
		
		}
	std::cout << "NUMSUM" << numsum << std::endl;
	std::cout << "PROPSUM" << prop_dsum << std::endl;
	if(numsum != prop_dsum)
		std::cout << "Amicable Pair" << std::endl;
	else
		std::cout << "Non Amicable" << std::endl;
	
		

