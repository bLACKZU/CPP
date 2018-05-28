#include <iostream>

int main()
{
	int n = 0, freq[10] = {0}, d = 0;
	std::cout << "Enter the number" << std::endl;
	std::cin >> n;
	while(n > 0)
	{
		d = n % 10;
		++freq[d]; 
		
		n = n / 10;
	}	std::cout << "The frequency of digits are" << std::endl;
	for(int i = 0; i < 10; i++)
	{
		if(freq[i] != 0)
			std::cout << i << "is present" << freq[i] << "times" << std::endl;
	}
}	