#include<iostream>
#include<vector>


int main()
{
	int deci_n, remainder;
	std::cout<<"Enter the decimal number:"<<std::endl;
	std::cin>>deci_n;
	std::vector<int> list;
	while(deci_n > 0)
	{
		remainder = deci_n % 2;
		deci_n = deci_n / 2;
		
		list.push_back(remainder);
	}
	std::cout<<"The equivalent binary is:"<<std::endl;
	for(auto end = list.end() - 1; end >= list.begin(); end--)
	{
		std::cout<<*end<<std::endl;
	}
}	