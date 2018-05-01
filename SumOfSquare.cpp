#include <iostream>
#include <cmath>

int main()
{
	int n = 0, i = 0, sum1 = 0, sum2 = 0, result = 0, diff = 0;
	for(i = 1; i <= 10; i++)
	{
		sum1 += i * i;
		sum2 += i;
		result = pow(sum2, 2);
		diff = result - sum1;
	}
	std::cout << "The resultant sum is" << diff << std::endl;
	
}
