#include <iostream>
#include "polyAdd_list.h"

bool isEmpty(NPTR &list) 
{
	if(list == nullptr)
		return true;
	return false;
}

NPTR createNode(const int &coef, const int &deg)
{
	NPTR plist = new NODE;
	plist->coefficient = coef;
	plist->degree = deg;
	plist->next = nullptr;
	return plist;
}

NPTR insertEl(NPTR &list, const int &coef, const int &deg, NPTR &tempNode)
{
	NPTR newNode = createNode(coef, deg);
	if(isEmpty(list))
	{
		tempNode = newNode;
		list = newNode;
		return tempNode;
	}
	tempNode->next = newNode;
	tempNode = newNode;
	return tempNode;
}

NPTR polyAdd(NPTR &newList, NPTR &firstList, NPTR &secondList, NPTR &tempNode)
{
	NPTR sumList = nullptr;
	int updtCoef = 0;
	while(firstList != nullptr && secondList != nullptr)
	{
		
		if(firstList->degree == secondList->degree)
		{
			updtCoef = firstList->coefficient + secondList->coefficient;
			sumList = insertEl(newList, updtCoef, firstList->degree, tempNode);
			firstList = firstList->next;
			secondList = secondList->next;
			//std::cout << sumList->coefficient << std::endl;
		}
		else if(firstList->degree > secondList->degree)
		{
			updtCoef = firstList->coefficient;
			sumList = insertEl(newList, updtCoef, firstList->degree, tempNode);
			//std::cout << sumList->coefficient << std::endl;
			firstList = firstList->next;
		}
		else if(secondList->degree > firstList->degree)
		{
			updtCoef = secondList->coefficient;
			sumList = insertEl(newList, updtCoef, secondList->degree, tempNode);
			secondList = secondList->next;
			//std::cout << sumList->coefficient << std::endl;
		}
	}
	while(firstList == nullptr && secondList != nullptr)
	{
		sumList = insertEl(newList, secondList->coefficient, secondList->degree, tempNode);
		secondList = secondList->next;
		//std::cout << sumList->coefficient << std::endl;
	}
	while(secondList == nullptr && firstList != nullptr)
	{
		sumList = insertEl(newList, firstList->coefficient, firstList->degree, tempNode);
		firstList = firstList->next;
		//std::cout << sumList->coefficient << std::endl;
	}
	sumList = newList;
	return sumList;
}

void display(NPTR newList, NPTR firstList, NPTR secondList, NPTR &tempNode)
{
	
	NPTR polySum = nullptr;
	polySum = polyAdd(newList, firstList, secondList, tempNode);
	while(polySum != nullptr)
	{
		if(polySum->next == nullptr)
			std::cout << polySum->coefficient <<"x^" << polySum->degree;
		else
			std::cout << polySum->coefficient <<"x^" << polySum->degree << "+";
			polySum = polySum->next;
		
	}
	std::cout << "\n";
}

int main()
{
	int coefficient, degree, ch, ch1 = 0;
	NPTR firstList = nullptr;
	NPTR secondList = nullptr;
	NPTR newList = nullptr;
	NPTR tempNode = nullptr;
	NPTR firstLastNode = nullptr;
	NPTR secondLastNode = nullptr;
	std::cout << "Kindly enter the elements of the polynomials you want to add" << std::endl;
	do
	{
		std::cout << "Please enter the degree of each element of the polynomial followed by the coefficients" << std::endl;
		std::cout << "1. To enter the elements sequentially of the first polynomial" << std::endl;
		std::cout << "2. To enter the elements sequentially of the second polynomial" << std::endl;
		std::cout << "3. Display the resultant polynomial after the both polynomials are entered" << std::endl;
		std::cout << "4. Exit" << std::endl;
		std::cout << "Please enter your choice" << std::endl;
		std::cin >> ch;
		
		switch(ch)
		{
			case 1 : std::cout << "Enter the coefficient of the polynomial" << std::endl;
					 std::cin >> coefficient;
					 std::cout << "Enter the degree of the polynomial" << std::endl;
					 std::cin >> degree;		
					 insertEl(firstList, coefficient, degree, firstLastNode);
					 break;
			
			case 2 : std::cout << "Enter the coefficient of the polynomial" << std::endl;
					 std::cin >> coefficient;
					 std::cout << "Enter the degree of the polynomial" << std::endl;
					 std::cin >> degree;		
					 insertEl(secondList, coefficient, degree, secondLastNode);
					 break;
			
			case 3 : display(newList, firstList, secondList, tempNode);
					 break;
					 
			case 4 : break;
			
			default : std::cout << "Invalid Choice" << std::endl;
		}
	}while(ch != 4);
		std::cout << "Thank You!" << std::endl;
}	
  