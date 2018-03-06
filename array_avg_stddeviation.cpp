#include <iostream>
#include <cmath>

int main()
{
	int n = 0, i  = 0; 
	double sum = 0, avg = 0, standard_deviation = 0;
	std::cout << "Please enter the size of the array:" << std::endl;
	std::cin >> n;
	int *list = new int[n];
	std::cout << "Please enter the array elements " << std::endl;
	for(i = 1; i <= n; i++)
	{
		std::cin >> list[i];
	
	}	
	for(i = 1; i <= n; i++)
	{
		sum += list[i];
		
	}
	avg = sum / n;
	std::cout << "The average is" << avg << std::endl;

	
	for(i = 1; i <= n; i++)
	{
		standard_deviation = sqrt(pow((list[i] - avg), 2) / n);
		std::cout << "The standard deviation is " << standard_deviation << std::endl;
	}
	
		delete [] list;
}		