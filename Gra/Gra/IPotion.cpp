#include "IPotion.h"



IPotion::IPotion()
{
}


IPotion::~IPotion()
{
}
void IPotion::showDescription()
{
	std::cout << typeid(*this).name() << std::endl;
}
