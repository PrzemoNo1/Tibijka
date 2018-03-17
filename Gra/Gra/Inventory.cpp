#include "Inventory.h"
#include <typeinfo>
#include <iterator>



Inventory::Inventory()
{
}


Inventory::~Inventory()
{
}
void Inventory::listItems()
{
	for (int i=0; i<items.size(); i++)//std::vector<IItem*>::iterator it = items.begin(); it != items.end(); it++)
	{
		std::cout << i + 1 << ". ";
		items.at(i)->showDescription();
	}
}
void Inventory::dropItem(/*czy powinien byc tu item???*/)
{
	listItems();
	std::cout << "Which one you want to erase?" << std::endl;
	int* button = new int;
	std::cin >> *button;
	std::vector<IItem*>::iterator it = items.begin();
	std::advance(it, *button - 1);
	items.erase(it);
	delete button;

}
void Inventory::addItem(IItem* item)
{
	items.push_back(item);
}