#include <iostream>

int main()
{
	int firstArrDegree = 0;
	int secondArrDegree = 0;
	int highDeg = 0;
	std::cout << "Please enter the highest degree of the first polynomial" << std::endl;
	std::cin >> firstArrDegree;
	std::cout << "Please Enter the highest degree of the second polynomial" << std::endl;
	std::cin >> secondArrDegree;
	int *polySum = new int[highDeg]();
	int *firstPolynomial = new int[firstArrDegree];
	int *secondPolynomial = new int[secondArrDegree];
	if(firstArrDegree > secondArrDegree)
	{
		highDeg = firstArrDegree;
		int *polySum = new int[highDeg]();
	}
	else
	{
		highDeg = secondArrDegree;
		int *polySum = new int[highDeg]();
	}
	std::cout << "Please enter the coefficients of terms of the first polynomial" << std::endl;
	for(int i = 0; i < firstArrDegree; i++)
	{
		std::cin >> *(firstPolynomial + i);
	}
	std::cout << "Please enter the coefficients of terms of the second polynomial" << std::endl;
	for(int j = 0; j < secondArrDegree; j++)
	{
		std::cin >> *(secondPolynomial + j);
	}
	for(int k = 0; k <= highDeg; k++)
	{
		polySum[k] = firstPolynomial[k] + secondPolynomial[k];
	}	
	for(int k = highDeg; k >= 0; k--)
	{
		if(*(polySum + k) != 0)
			std::cout << *(polySum + k) <<"x^" << k << "+";
	}
	std::cout << "\n";

	delete [] polySum;
	delete [] secondPolynomial;
	delete [] firstPolynomial;
}	
		
		
