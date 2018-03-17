#pragma once
#include "Boots.h"
#include "Dagger.h"
#include "Gloves.h"
#include "Hammer.h"
#include "Helm.h"
#include "IArmor.h"
#include "IItem.h"
#include "IWeapon.h"
#include "Pants.h"
#include "Tunic.h"
class Creature
{
public:
	Creature();
	virtual ~Creature();
	virtual void attack(Creature* creature) = 0;
	virtual void takeDamage(int hit) = 0;
};

