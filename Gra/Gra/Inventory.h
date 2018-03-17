#pragma once
#include <vector>
#include "IItem.h"
#include <iostream>
class Inventory
{
	std::vector<IItem*> items;
public:
	Inventory();
	~Inventory();
	void listItems();
	void dropItem();
	void addItem(IItem* item);

};

