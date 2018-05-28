#include <iostream>

int main()
{
	int n = 0;
	std::cout << "Enter the no of the terms" << std::endl;
	std::cin >> n;
	int arr[n];
	std::cout << "Enter the array elements" << std::endl;
	for(int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(arr[j + 1] < arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}	
	std::cout << "The sorted array is" << std::endl;
	for(int i = 0; i < n; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}	