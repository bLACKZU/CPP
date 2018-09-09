#include <iostream>
#include <tuple>
#include <cmath>


bool isPrime(int&);
int getNextPrime(int&);
std::tuple<int, int, int> getFibo(int &, int&);

bool isPrime(int &p)
{
	int i = 0;
	if(p <= 1)
		return false;
	else
		for(i = 2; i <= sqrt(p); i++)
			if(p % i == 0)
				return false;
	return true;
}

int getNextPrime(int &p)
{
	for(p += 1;  ; p++)
	{
		if(isPrime(p))
			return p;
	}
}
	
std::tuple<int, int, int> getFibo(int &f1, int &f2)
{
	int f3 = f1 + f2;
	f2 = f1;
	f1 = f3;
	return std::make_tuple(f1, f2, f3);
}

int main()
{
	int n, fib_term, prime_term = 0;
	int first_fib = 1;
	int second_fib = 1;
	int indie_prime = 1;
	std::cout << "Please enter the apex range of your alternating sequence" << std::endl;
	std::cin >> n;	
	for(int i = 0; i < n; i++)
	{
		if(i == 0 || i == 2)
		{
			first_fib = 1;
			std::cout << first_fib << ",";
			continue;
		}	
		else if(i % 2 == 0 && i != n - 1)
		{
			std::tie(first_fib, second_fib, fib_term)  = getFibo(first_fib, second_fib);
			std::cout << fib_term << ",";
			
		}
		else if(i == n - 1 && i % 2 == 0)
		{
			std::tie(first_fib, second_fib, fib_term)  = getFibo(first_fib, second_fib);
			std::cout << fib_term;
		}
		else if(i == n - 1 && i % 2 != 0)
		{	
			prime_term = getNextPrime(indie_prime);
			indie_prime = prime_term;
			std::cout << prime_term;
		}	
		else if(i % 2 != 0 && i != n - 1)
		{
			prime_term = getNextPrime(indie_prime);
			indie_prime = prime_term;
			std::cout << prime_term << ",";
		}
	}
	std::cout << "\n";
}	
	