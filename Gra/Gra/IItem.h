#pragma once
enum ItemEnum
{
	WEA,
	HEL,
	TUN,
	PAN,
	GLO,
	BOO
};

class IItem
{
public:
	IItem();
	~IItem();
	virtual ItemEnum GetType() = 0;
};

