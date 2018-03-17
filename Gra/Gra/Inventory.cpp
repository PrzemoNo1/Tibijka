#include "Inventory.h"
#include <typeinfo>



Inventory::Inventory()
{
}


Inventory::~Inventory()
{
}
void Inventory::listItems()
{
	for (std::vector<IItem*>::iterator it = items.begin(); it != items.end(); it++)
	{
		std::cout << typeid(*it).name() << std::endl;
	}
}
void Inventory::dropItem(/*czy powinien byc tu item???*/)
{

}
void Inventory::addItem(IItem* item)
{
	items.push_back(item);
}