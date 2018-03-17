#pragma once
#include "Creature.h"
#include "Inventory.h"
class Player :
	public Creature
{
	int level;
	int actualHP;
	int maxHP;
	Inventory backpack;

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
	int getMaxHP();
	int getHP();
	int getDefence();
	Inventory getInventory();
};

