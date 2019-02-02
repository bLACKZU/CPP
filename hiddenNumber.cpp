#include <iostream>

int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	std::cout << "Enter the number of items for your array" << std::endl;
	std::cin >> n;
	int arr[n];
	std::cout << "Enter the items in the array" << std::endl;
	for(i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			sum += arr[i] - arr[j];
		}
		if(sum == 0)
			break;
		else
			sum = 0;
	}
	std::cout << "The hidden number is" << " " << arr[i] << std::endl;
}	
	