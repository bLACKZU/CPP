#include <iostream>
#include <cmath>

bool decision(const int &, const int &);
int reverse(int &numb)
{
	int lastDigit = 0;
	int rev = 0;
	while(numb > 0)
	{
		lastDigit = numb % 10;
		rev *= 10 + lastDigit;
		numb /= 10;
	}
	return rev;
}

bool isPrime(const int &numb)
{
	if(numb <= 1)
		return false;
	else
	{
		for(int i = 2; i <= sqrt(numb); i++)
		{
			if(numb % i == 0)
				return false;
		}
	}
}

void isTruncatable(int &num)
{
	int revNum = reverse(num);
	while(isPrime(num) && isPrime(revNum))
	{
		num = num / 10;
		revNum  = revNum / 10;
	}
	decision(num, revNum);
}	

bool decision(const int &num, const int &revNum)
{
	if(num == 0 && revNum == 0)
	{
		std::cout << "The number is truncatable prime" << std::endl;
		return true;
	}	
	else
	{
		std::cout << "The number cannot be truncatable prime" << std::endl;
		return false;
	}	
}
	
int main()
{
	int num, numLastDigit, revNumLastDigit = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	isTruncatable(num);
}


	
		
	
		
		
		

	
	