//Complex_main.cpp

#include <iostream>
#include "Complex.h"
int main()
{ 
	Complex c1(4, 3);
	Complex c2(5, 6);
	Complex c3(8, 9);
	Complex c4(4, 4);
	(c1 + c2).display();
	(c3 - c4).display();
}	