#pragma once
#include "IItem.h"
class IArmor :
	public IItem
{
	int def;

public:
	int getDefence();
	IArmor(int a);
	virtual ~IArmor();
	virtual void showDescription();
};

