#include <iostream>

int naturalSum(int);

int naturalSum(int n)
{
	
	if(n == 1)
		return 1;
	else
		return n + naturalSum(n - 1);
}
int main()
{
	int n = 0, sum = 0;
	std::cout << "Enter the no of terms" << std::endl;
	std::cin >> n;
	sum = naturalSum(n);
	std::cout << sum << std::endl;
}
	
	