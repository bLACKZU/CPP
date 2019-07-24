#include <iostream>
int* getRange(const int&, const int*, const int&);
int* getRange(const int& self, const int* arr, const int &target) 
{
	int i = 0;
	int j = self - 1;
	static int indexArr[2];
	while(i != j)
	{
		if(arr[i] != target && arr[j] != target)
		{
			i++;
			j--;
		}
		else if(arr[i] != target && arr[j] == target)
			i++;
		else if(arr[i] == target && arr[j] != target)
			j--;
		else if(arr[i] == target && arr[j] == target)
			break;
	}
	if(arr[i] != arr[j])
	{
			indexArr[0] = -1;
			indexArr[1] = -1;
	}	
	else
	{
		indexArr[0] = i;
		indexArr[1] = j;
	}
	return indexArr;
}	
int main()
{
	int numOfElements = 0;
	int target = 0;
	std::cout << "Please enter the number of elements in the array." << std::endl;
	std::cin >> numOfElements;
	int arr[numOfElements];
	std::cout << "Please enter the elements inside the array one after the other in a sorted manner." << std::endl;
	for(int i = 0; i < numOfElements; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "Please enter the target element you want to know head and tail indices of." << std::endl;
	std::cin >> target;
	int *indexArr = getRange(numOfElements, arr, target);
	std::cout << "The head and tail indices of the index array is -> ";
	for(int i = 0; i < 2; i++)
	{
		std::cout << indexArr[i] << " ";
	}
	std::cout << "\n";
}
