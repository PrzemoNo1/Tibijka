#include "Tunic.h"


Tunic::Tunic(int a) : IArmor(a)
{

}

Tunic::~Tunic() {}

ItemEnum Tunic::GetType()
{
	return this->item;
}




