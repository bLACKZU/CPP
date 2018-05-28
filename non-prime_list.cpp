#include <iostream>
#include <cmath>

bool isPrime(int);
int main()
{
	int upb = 0;
	std::cout << "Enter the upper bound" << std::endl;
	std::cin >> upb;
	std::cout << "The list of non-prime numbers are" << std::endl;
	for(int i = 1; i <= upb; i++)
	{
		if(isPrime(i) == false)
			std::cout << i << std::endl;
	}
}	
bool isPrime(int x)
{
	for(int i = 2; i <= sqrt(x); i++)
	{
		if(x % i == 0)
			return false;
	}
	return true;
}	