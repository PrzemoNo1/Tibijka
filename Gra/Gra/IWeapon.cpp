#include "IWeapon.h"
#include <cstdlib>
IWeapon::IWeapon(int a, int b)
{
	Att = a;
	Crit = b;
}

IWeapon::~IWeapon()
{
}

ItemEnum IWeapon::GetType()
{
	return this->item;
}

bool IWeapon::IsCriticalHit()
{
	if (Crit <= (rand() % 100) + 1)
		return true;
	return false;
}


