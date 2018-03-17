#include "Gloves.h"


Gloves::Gloves(int a) : IArmor(a)
{
}

Gloves::~Gloves()
{
}

ItemEnum Gloves::GetType()
{
	return this->item;
}

