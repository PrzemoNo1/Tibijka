#include "Fight.h"



Fight::Fight(Creature* A, Creature* B)
{
	first = A;
	second = B;
}


Fight::~Fight()
{
}

void Fight::battle()
{
	while (true)//!(0==(first->getHP()) || 0 == (second->getHP())))
	{
		first->attack(second); 
		std::cout << "Player 2's HP: " << second->getHP() << std::endl;
		if (0 == (second->getHP()))
		{
			std::cout << "Player 1 win!" << std::endl;
			break;
		}
		second->attack(first);
		std::cout << "Player 1's HP: " << first ->getHP() << std::endl;
		if (0 == (first->getHP()))
		{
			std::cout << "Player 2 win!" << std::endl;
			break;
		}
		std::cout << "==============" << std::endl;
	}
}
