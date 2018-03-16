#include "Helm.h"



ItemEnum Helm::GetType()
{
	return this->item;
}
Helm::Helm(int a) : IArmor(a)
{
}
Helm::~Helm()
{
}
