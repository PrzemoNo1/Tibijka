#pragma once
#include "IItem.h"
class IArmor :
	public IItem
{
	int def;

public:
	int GetDefence();
	IArmor(int a);
	virtual ~IArmor();
};

