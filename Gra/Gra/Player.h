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
	Player(int level=1, int hp=100);
	~Player();
	void Equip(IItem* item);
	int getMaxHP();
	int getHP();
	void setHP(int HP);
	int getDefence();
	void attack(Creature* creature);
	void takeDamage(int hit);
	Inventory getInventory();
};

