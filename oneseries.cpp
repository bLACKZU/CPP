//1 + 11 + 111 + 1111...n 

#include <iostream>
#include <cmath> 
int main()
{
	int n = 0, res = 0, sum = 0;
	std::cout << "Enter the number of terms" << std::endl;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		res += pow(10, i);
		sum += res;

	}
	std::cout << "The series sum is" << sum << std::endl;
}		 