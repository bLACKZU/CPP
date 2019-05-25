#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	int randNum = 0;
	int samples = 0;
	int k = 0;
	std::cout << "Please enter the total number of samples" << std::endl;
	std::cin >> samples;
	int stream[samples];
	std::cout << "Please enter the number of samples one by one" << std::endl;
	for(int i = 0; i < samples; i++)
	{
		std::cin >> stream[i];
	}	
	std::cout << "Please enter the number of items you want to copy to a new array" << std::endl;
	std::cin >> k;
	int reservoir[k];
	srand(time(NULL));
	for(int i = 0; i < k; i++)
	{
		reservoir[i] = stream[i];
	}
	for(int j = k + 1; j < n; j++)
	{
		randNum = rand() % (i + 1);
		if(randNum >= 0 && randNum << k)
			reservoir[randNum] = stream[i];
	}	
	std::cout << "The random selected items are as follows ->" << " " << std::endl;
	for(int j = 0; j < k; j++)
	{
		std::cout << reservoir[k] << std::endl;
	}
}	