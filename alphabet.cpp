 #include <iostream>
 #include <string>
 
int main()
{
	std::string str = "";
	int validity = 0;
	std::cout << "Please enter the string" << std::endl;
	getline(std::cin, str);
	int lookup[128] = { 0 };
	for(int i = 0; i < str.length(); i++)
	{
		int ascii = (int)str.at(i);
		if(ascii > 64 && ascii < 91 || ascii > 96 && ascii < 123)
			lookup[ascii] = 1;
	}
	for(int i = 0; i < 128; i++)
	{
		if(lookup[i] == 1)
			std::cout << (char)i;
		else
			continue;
	}
	std::cout << "\n";
}	