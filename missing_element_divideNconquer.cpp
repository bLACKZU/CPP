#include <iostream>

int modifiedBinSearch(const int *arr, const int &low, const int &high)
{
	int mid = (low + high) / 2;
	if(low == high)
		return low;
	if(arr[mid] == mid)
		modifiedBinSearch(arr, mid + 1, high);
	else
		modifiedBinSearch(arr, low, mid);
}
int main()
{
	int n = 0;
	std::cout << "Please enter the number of elements" << std::endl;
	std::cin >> n;
	int arr[n + 1];
	std::cout << "Please enter the elements in sorted order" << std::endl;
	for(int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	int low = 0;
	int high = n - 1;
	int x = modifiedBinSearch(arr, low, high);
	std::cout << "The smallest missing element is" << " " << x << std::endl;
}	
	