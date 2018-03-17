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
int IWeapon::getAtt()
{
	return Att;
}

bool IWeapon::IsCriticalHit()
{
	if (Crit <= (rand() % 100) + 1)
		return true;
	return false;
}
void IWeapon::showDescription()
{
	std::cout << typeid(*this).name() << " Attack: " << getAtt() << std::endl;
}

