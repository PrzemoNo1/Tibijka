#pragma once
#include "IArmor.h"
class Boots :
	public IArmor
{
	ItemEnum item = BOO;
public:
	Boots(int a);
	~Boots();
	virtual ItemEnum GetType() override;
};

