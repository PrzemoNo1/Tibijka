#include "Pants.h"


Pants::~Pants()
{
}
ItemEnum Pants::GetType()
{
	return this->item;
}
Pants::Pants(int a) : IArmor(a)
{

}
