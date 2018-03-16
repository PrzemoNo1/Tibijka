#include "IArmor.h"

int IArmor::GetDefence()
{
	return def;
}

IArmor::IArmor(int a)
{
	def = a;
}
IArmor::~IArmor() {}

