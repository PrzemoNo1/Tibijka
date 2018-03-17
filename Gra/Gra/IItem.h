#pragma once
#include <iostream>
enum ItemEnum
{
	WEA,
	HEL,
	TUN,
	PAN,
	GLO,
	BOO,
	HPot
};

class IItem
{
public:
	IItem();
	virtual ~IItem();
	virtual ItemEnum GetType() = 0;
	virtual void showDescription() = 0;
};

