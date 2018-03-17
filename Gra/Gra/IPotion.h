#pragma once
#include "IItem.h"
class IPotion :
	public IItem
{
public:
	IPotion();
	virtual ~IPotion();
	virtual void showDescription();
};

