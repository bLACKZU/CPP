#include <iostream>

void InsertionSort(int* arr, int n)
{
	for(int i = 1; i <= n; i++)
	{
		int value = arr[i];
		int hole = i;
	 	while(hole > 0 && arr[hole - 1] > value)
		{
			arr[hole] = arr[hole - 1];
			hole = hole - 1;
		}
	arr[hole] = value;
	}
}
int main()
{
	int n = 0, i = 0;
	std::cout << "Enter the number of terms" << std::endl;
	std::cin >> n;
	int arr[n];
	std::cout << "Enter the elements in array" << std::endl;
	for(i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	InsertionSort(arr, n);
	std::cout << "The sorted array is" << std::endl;
	for(i = 0; i < n; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}	
