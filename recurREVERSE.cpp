#include <iostream>

int reverse(int, int);

int reverse(int n, int rev)
{
	int d = 0;
	if(n == 0)
		return 0;
	else
	{
		d = n % 10;
		rev = (rev*10) + d;
		std::cout << rev << std::endl;
		reverse((n / 10), rev);
	
	}
	
}
int main()
{
	int n = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> n;
	int revs = reverse(n, 0);
}	
	