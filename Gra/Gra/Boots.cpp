#include "Boots.h"



Boots::Boots(int a) : IArmor(a)
{

}


Boots::~Boots()
{
}

ItemEnum Boots::GetType()
{
	return this->item;
}

