#include <iostream>
#include <string>

 void revString(std::string str)
{
	
	if(str.length() < 1)
		return;
	else
		revString(str.substr(1));
	std::cout << str[0];
	std::cout << "/n";
}
int main()
{
	std::string str;
	std::cout << "Please enter the string" << std::endl;
	std::cin >> str; 
	int index = 0;
	int length = str.length();
	revString(str);
}	
	
	
	