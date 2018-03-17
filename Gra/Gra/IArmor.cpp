#include "IArmor.h"

int IArmor::getDefence()
{
	return def;
}

IArmor::IArmor(int a)
{
	def = a;
}
IArmor::~IArmor() {}

void IArmor::showDescription()
{
	std::cout << typeid(*this).name() <<  " Defence: " << (*this).getDefence() << std::endl;
}
