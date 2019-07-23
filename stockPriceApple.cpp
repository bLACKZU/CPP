#include <iostream>
#include <vector>

int getMaxProfit(const std::vector<int>&);
int getMaxProfit(const std::vector<int>& stockPrices)
{
	int headIndex = 0;
	int tailIndex = stockPrices.size() - 1; 
	int lowestPrice = 0;
	int highestPrice = 0;
	while(tailIndex > headIndex)
	{
		if(headIndex + 1 == tailIndex)
				break;
		else if(stockPrices[tailIndex] > stockPrices[headIndex] && stockPrices[headIndex] - stockPrices[headIndex + 1] > 0)
		{
			highestPrice = stockPrices[tailIndex];
			lowestPrice = stockPrices[headIndex + 1];
			headIndex++;
		}
		else if(stockPrices[tailIndex] > stockPrices[headIndex] && stockPrices[headIndex] - stockPrices[headIndex + 1] < 0)
			headIndex++;
		else
			tailIndex--;
	}
	return (highestPrice - lowestPrice);
}
int main()
{
	int numOfApples = 0;
	int stockPrice = 0;
	int flag = 0;
	std::vector<int> stockPrices;
	std::cout << "Please enter the Apple's stock prices" << std::endl;
	do{
		std::cin >> stockPrice;
		stockPrices.push_back(stockPrice);
		std::cout << "Continue? (1 = Yes / 0 = No)" << std::endl;
		std::cin >> flag;
	}while(flag != 0);
	int maxProfit = getMaxProfit(stockPrices);
	std::cout << "The maximum profit is " << maxProfit << std::endl;
}	
	