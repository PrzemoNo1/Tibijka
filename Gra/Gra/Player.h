#pragma once
#include "Creature.h"
class Player :
	public Creature
{
	IWeapon* wep;
	Helm* hel;
	Tunic* tun;
	Pants* pants;
	Gloves* glo;
	Boots* boo;
public:
	Player();
	~Player();
	void Equip(IItem* item);
};

