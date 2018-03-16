#pragma once
#include "IArmor.h"
class Gloves :
	public IArmor
{
	ItemEnum item = GLO;
public:
	Gloves(int a);
	~Gloves();
	virtual ItemEnum GetType() override;
};

