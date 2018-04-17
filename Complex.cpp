//Complex.cpp

#include <iostream>
#include "Complex.h"

void Complex::display() const
{
	std::cout << real << "+" << "(" << imaginary << "i" << ")" << std::endl;
}	