#include <iostream>

int main()
{
	int i = 0, j = 0, k = 0, n = 0, temp = 0, max = 0;
	std::cout << "Enter the number of terms" << std::endl;
	std::cin >> n;
	int arr[n];
	std::cout << "Please enter the terms" << std::endl;
	for(i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	for(j = 0; j < n; j++) 
	{
		max = 0;
		for(k = j + 1; k <= n - 1; n--)
		{
			if(arr[k] > arr[max])
				max = k;
			
		}
		temp = arr[k];
		arr[k] = arr[max];
		arr[max] = temp;
	}
	std::cout << "The sorted array is" << std::endl;
	for(k = 0; k < n; i++)
	{
		std::cout << arr[k] << " " << std::endl;
	}
}	