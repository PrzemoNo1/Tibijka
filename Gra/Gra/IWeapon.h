#pragma once
#include "IItem.h"
class IWeapon :	public IItem
{
	ItemEnum item = WEA;
protected:
	int Att;
	int Crit;
public:
	IWeapon(int a, int b);
	virtual ~IWeapon();
	virtual ItemEnum GetType() override;
	virtual int Attack() = 0;
	virtual bool IsCriticalHit();
	
};

