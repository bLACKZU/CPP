#include <iostream>
#include <vector>


int main()
{
	int n = 0, base = 0, remainder = 0, back = n;
	std::vector<int> binList;
	std::vector<int> octalList;
	std::vector<char> hexadecimalList;
	std::cout << "Enter the number you want to convert:" << std::endl;
	std::cin >> n;
	std::cout << "The base of the number in which you want to convert to ?(2 = binary, 8 = octal, 16 = hexadecimal)" << std::endl;
	std::cin >> base;
	switch(base)
	{
		case 2 : while(n > 0)
				{
					remainder = n % 2;
					n = n / 2;
					binList.push_back(remainder);
				}	
				std::cout << "The equivalent binary is" << std::endl;
				for(auto end = binList.end() - 1; end >= binList.begin(); end--)
				{
					std::cout << *end << std::endl;
				}
				
					break;
		case 8 : while(back > 0)
				{
					remainder = back % 8;
					back = back / 8;
					octalList.push_back(remainder);
				}
				std::cout << "The equivalent octal is" << std::endl;
				for(auto end2 = octalList.end() - 1; end2 >= octalList.begin(); end2--)
				{
					std::cout << *end2 << std::endl;
				}	
					back = n;
					break;
		case 16 : while(back > 0)
				{
					remainder = back % 16;
					back = back / 16;
					if(remainder >= 10 && remainder <= 15)
					{
						remainder = 65;
						++remainder;
					}	
					hexadecimalList.push_back(remainder);
				}
				std::cout << "The equivalent hexadecimal is "<< std::endl;
				for(auto end3 = hexadecimalList.end() - 1; end3 >= hexadecimalList.begin(); end3--)
				{
					std::cout << *end3 <<std::endl;
				}
					break;	
		default : std::cout << "Invalid number" << std::endl;		
	}
}	
					
				
					
					
	
				 
					 
					
			
		
		