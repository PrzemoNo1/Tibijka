#pragma once
#include "IArmor.h"
class Tunic :
	public IArmor
{
	ItemEnum item = TUN;
public:
	Tunic(int a);
	~Tunic();
	virtual ItemEnum GetType() override;
};

