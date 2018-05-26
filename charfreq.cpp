#include <iostream>
#include <string>

int main()
{
	std::string s = "";
	std::cout << "Enter the string" << std::endl;
	getline(std::cin, s);
	int freq[26];
	for(int i = 65; i < 124; i++)
	{
		freq[i] = {0};
		
	}	
	for(int i = 0; i < s.length(); i++)
	{
		char c = s.at(i);
		int x = (int)c;
		++freq[x];
	}
	

	for(int i = 65; i < 124; i++)
	{
		if(freq[i] != 0)
			std::cout << (char)i << " is present " << freq[i] << " times " << std::endl;
	}
}
