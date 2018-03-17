#pragma once
#include "IWeapon.h"
#include <iostream>
class Dagger : public IWeapon
{
public:
	virtual int Attack() override;
	Dagger(int a = 50, int b = 60);
	~Dagger();

};

