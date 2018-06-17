#include <iostream>
#include "fractional_knapsack.h"

int main()
{
	double ratio = 0.0, total = 0.0, profit = 0.0;
	int item = 0, kcap = 0, k = 0;
	std::cout << "Enter the capacity of the knapsack" << std::endl;
	std::cin >> kcap;
	std::cout << "Enter the no of items" << std::endl;
	std::cin >> item;
	Choice kp[item], temp;
	std::cout << "Enter the weight and value of items" << std::endl;
	for(int i = 0; i < item; i++)
	{
		std::cin >> kp[i].weight;
		std::cin >> kp[i].value;
	}
	for(int i = 0; i < item; i++)
	{
		kp[i].ratio = kp[i].value / kp[i].weight;
	}
	std::cout << "Arranging the ratio in descending order" << std::endl;
	for(int i = 0; i < item; i++)
	{
		for(int j = 0; j < item - i - 1; j++)
		{
			if(kp[j + 1].ratio > kp[j].ratio)
			{
				temp =  kp[j];
				kp[j] = kp[j + 1];
				kp[j + 1] = temp;
			}
		}
	}
	
	std::cout << "The ratio in descending order is" << std::endl;
	
	for(int i = 0; i < item; i++)
	{
		kp[i].flag = false;
		std::cout << kp[i].ratio << std::endl;
	}
	
	for(k = 0; total + kp[k].weight < kcap; k++)
	{
		
		total += kp[k].weight;
		kp[k].flag = true;
		profit += kp[k].value;
	}
	
	profit += kp[k].value * (kcap - total) / kp[k].weight ;
	std::cout << "The profit is" << profit << std::endl;
	

}	
		
			
		
			