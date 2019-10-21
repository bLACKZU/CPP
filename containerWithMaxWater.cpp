#include <iostream>
#include <vector>
#include <climits>

int maxArea(const std::vector<int> &);
int maxArea(const std::vector<int> &heights)
{
	int area = INT_MIN;			
	int start = 0;
	int end = heights.size() - 1;
	while(start < end)
	{
		if(heights[start] < heights[end] && heights[start] * (end - start) > area)
		{
			area = heights[start] * (end - start);
			start++;
		}
		else if(heights[end] < heights[start] && heights[end] * (end - start) > area)
		{
			area = heights[end] * (end - start);
			end--;	
		}
		else if(heights[start] < heights[end] && heights[start] * (end - start) < area)
			start++;
		else if(heights[end] < heights[start] && heights[end] * (end - start) < area)
			end--;
		else if(heights[start] == heights[end] && heights[start] * (end - start) > area)
		{
			area = heights[start] * (end - start);
			start++;
		}
		else
			start++;
	}
	return area;
}
int main()
{
	int input = 0;
	std::vector<int> heights;
	std::cout << "Please enter the elements in vector" << std::endl;
	do{
		std::cin >> input;
		heights.push_back(input);
		std::cout << "Do you want to continue ? 1 -> Yes, 0 -> No" << std::endl;
		std::cin >> input;
	}	
	while(input != 0);
	int maxWater = maxArea(heights);
	std::cout << "The max water the container can contain is " << maxWater << " unit ^ 2" << std::endl;
}
	
	