#include <iostream>
#include <random>
#include <ctime>

void attack(int&, int&);
void airstrike(int &);
void danger(int &);
void teamkill(int &);

void attack(int &humans, int &aliens) 
{
	std::mt19937 human(time(0));
	std::uniform_int_distribution<int> strength(50, 100);
	std::mt19937 alien(time(0));
	std::uniform_int_distribution<int> strength1(50, 100);
	if(strength(human) > strength1(alien))
	{	
		--aliens;
		std::cout << "You killed an alien" << std::endl;
	}
	else
	{	
		--humans;
		std::cout << "One of the humans was killed" << std::endl;
	}
}	
void airstrike(int &aliens) 
{
	if(aliens < 6)
	{
		std::cout << "Sorry, you entered too less aliens" << std::endl;
	}
	else
	{
		aliens = aliens - 6;
		std::cout << " KILLSTREAK! YOU KILLED 6 ALIENS" << std::endl;
	}
}	
void danger(int &humans) 
{
	if(humans < 2)
	{
		std::cout << "Sorry, you entered too less humans! << std::endl;
	}	
	else
	{
		humans = humans - 2;
		std::cout << " MAYDAY! 2 OF US DIED" << std::endl;
	}
}	
void teamkill(int &humans) 
{
	--humans;
	std::cout << " OH CRAP! You killed your own teammate" << std::endl;
}	
int main()
{
	int diceroll, humans, aliens, ch = 0;
	std::cout << "		~Welcome to HumansVAliens Game~		" << std::endl;
	std::cout << " Enter the number of aliens and humans" << std::endl;
	std::cin >> aliens >> humans;
	std::cout << "	The Aliens have started attacking	" << std::endl;
	
	std::cout << "_-`-_-`-_-`-_~SOUND OF SWORDS AND BULLETS_-`-_-`-_-`-_~" << std::endl;
	std::mt19937 randomGenerator(time(0));
	std::uniform_int_distribution<int> roll(1, 6);
	while(humans >= aliens && aliens > 0) 
	{
		
		for(;;)
		{		
			std::cout << " 1 -> To roll the dice and start attacking " << std::endl;
			std::cout << " 2 -> To forfeit!" << std::endl;
		
			std::cin >> ch;
			switch(ch)
			{
				case 1 : if(roll(randomGenerator) == 6)
							attack(humans, aliens);
						 if(roll(randomGenerator) == 5)
							airstrike(aliens);
						 if(roll(randomGenerator) == 4)
							attack(aliens, humans);
						 if(roll(randomGenerator) == 3)
							danger(humans);
						 if(roll(randomGenerator) == 2)
							airstrike(aliens);
						 if(roll(randomGenerator) == 1)
							teamkill(humans);
						 break;
					  
				case 2 : std::cout << " YOU ARE A FUCKING COWARD" << std::endl;
						 break;
					
			
				default : std::cout << " Invalid Choice" << std::endl;
		    }
		
		}

	}
	if(aliens == 0 || aliens < humans)
		std::cout << " WINNER WINNER CHICKEN DINNER" << std::endl;
	if(humans < aliens)
		std::cout << " THE ALIENS HAVE INVADED " << std::endl;
	
}	