#include "Hammer.h"

Hammer::Hammer(int a, int b) : IWeapon::IWeapon(a, b)
{

}



Hammer::~Hammer()
{
}

int Hammer::Attack()
{
	if (IWeapon::IsCriticalHit())
	{
		std::cout << "Critical Hint (Attack*2): " << 2 * Att << std::endl;
		return 2 * Att;
	}
	std::cout << "At by Hammer" << std::endl;
	return Att;

}

