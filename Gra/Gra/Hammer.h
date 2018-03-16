#pragma once
#include "IWeapon.h"
#include <iostream>
class Hammer : IWeapon
{
public:
	virtual int Attack() override;
	Hammer(int a=120, int b=30);

};

