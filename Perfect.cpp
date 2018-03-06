#include<iostream>


int main()
{
	int n ;
	std::cout<<"Please enter the number:"<<std::endl;
	std::cin>>n;
	int i = 0, sum = 3;
	for(i = 3; i != n;i++)
	{
		if(n % i == 0)
			sum += i;
	}
	if(sum== n)
		std::cout<<"The number is a perfect number."<<std::endl;
	else
		std::cout<<"Not a perfect number."<<std::endl;
}	
	
	
	
	
	