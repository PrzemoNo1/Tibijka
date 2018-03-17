#pragma once
#include "IArmor.h"
class Helm :
	public IArmor
{
	ItemEnum item = HEL;
public:
	virtual ItemEnum GetType() override;
	Helm(int a);
	~Helm();

};

