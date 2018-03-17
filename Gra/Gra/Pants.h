#pragma once
#include "IArmor.h"
class Pants : public IArmor
{
	ItemEnum item = PAN;
public:
	virtual ItemEnum GetType() override;
	Pants(int a);
	~Pants();

};

