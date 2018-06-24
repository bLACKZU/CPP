#include <iostream>
#include <string>

bool dup(std::string str, int i, char c)
{
	for(i = i + 1; i < str.length(); i++)
	{
		if(c == str.at(i))
			return true;
	}	
}	
int main()
{
	int count = 0, i = 0, j = 0, pos = 0;
	std::string sentence = "", word = "";
	std::cout << "Please Enter The Sentence !" << std::endl;
	getline(std::cin, sentence);
	std::cout << "Please Enter the word you want to find out from the string !" << std::endl;
	getline(std::cin, word);
	for(i = 0; i < sentence.length(); i++)
	{
		
		for(j = 0; j < word.length(); j++)
		{	
			pos = i;
			if(sentence.at(i) == word.at(j) && dup(sentence, i, word.at(j)) == false)
			{
				
				count++;
			}
		}	
		
	}
	if(count == word.length())
		std::cout << "The word you entered is present" << std::endl;
	else
		std::cout << "The word you entered is not present in your string" << std::endl;
}	