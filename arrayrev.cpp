#include <iostream>

void rev(int *arr, int j, int bk, int n)
{
	while(j < n && n >= (bk / 2))
	{
		int temp = arr[j];
		arr[j] = arr[--n];
		arr[n] = temp;
		j++;
	}
}
int main()
{
	int num = 0;
	std::cout << "Enter the number of items" << std::endl;
	std::cin >> num;
	int bak = num;
	int arr[num];
	std::cout << "Enter the array elements" << std::endl;
	for(int i = 0; i < num; i++)
	{
		std::cin >> arr[i];
	}
	int j = 0;	
	rev(arr, j, bak, num);
	std::cout << "The array in reversed order is" << std::endl;
	for(int k = 0; k < num; k++)
	{
		std::cout << arr[k] << std::endl;
	}	
}	