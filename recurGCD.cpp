#include <iostream>

int gcd(int, int);

int gcd(int n1, int n2)
{
	if(n1 == n2)
		return n1;
	else
	{
		if(n1 > n2)
			return gcd((n1 - n2), n2);
		else
			return gcd((n2 - n1), n1);
	}	
}
int main()
{
	int n1 = 0, n2 = 0, store = 0;
	std::cout << "Enter the two integers" << std::endl;
	std::cin >> n1 >> n2;
	store = gcd(n1, n2);
	std::cout << "GCD " << store << std::endl;
}	
	