#include<iostream>
#include<cmath> 


class Primefact
{
	int n;
public:	
	void set(int a)
	{
		n = a;
	}

	bool isPrime(int x)
	{
		int i = 0;
		if(x <= 1)
			return false;
		for(i = 2; i <= sqrt(x); i++)
		{
			if(x % i == 0)
				return false;
	    }
		return true;
	}

	void factors()
	{
		int j = 0;
		for(j = 2; j < n;j++)
		{
			if(n % j == 0 && isPrime(j) == true)
				std::cout<<j<<std::endl;
		}
	}
};

int main()
{
	int num;
	std::cout<<"Please enter the number :"<<std::endl;
	std::cin>>num;
	Primefact call;
	call.set(num);	
	call.factors();
	return 0;
}
