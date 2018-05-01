#include <iostream>

int main()
{
	int n = 0, i = 0;
	std::cout << "Enter the integer" << std::endl;
	std::cin >> n;
	if(n == 1)
		std::cout << "NO SEQUENCE" <<std::endl;
	std::cout << "The Largest Collatz Sequence is" << std::endl;
	while(n > 1)
	{
		if(n % 2 != 0)
			n = 3*n + 1;
		else
			n = n / 2;
		std::cout << n << ",";
		
	}
	std::cout << "\n";
}	
