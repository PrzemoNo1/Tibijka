#include "Player.h"



Player::Player(int level, int hp)
{
	this->level = level;
	actualHP = hp;
}


Player::~Player()
{
}
void Player::Equip(IItem* item)
{	
	backpack.addItem(item);
	switch (item->GetType())
	{
	case WEA: wep = static_cast<IWeapon*>(item); break;
	case HEL: hel = (Helm*)item; break;
	case TUN: tun = (Tunic*)item; break;
	case PAN: pants = (Pants*)item; break;
	case GLO: glo = (Gloves*)item; break;
	case BOO: boo = (Boots*)item; break;
	}
}
int Player::getMaxHP()
{
	return maxHP;
}
int Player::getHP()
{
	return actualHP;
}
void Player::setHP(int HP)
{
	actualHP += HP;
	if (actualHP >= maxHP) actualHP = maxHP;
}
int Player::getDefence()
{
	return (*hel).getDefence() + (*tun).getDefence() + (*pants).getDefence() + (*glo).getDefence() + (*boo).getDefence();
}
void Player::attack(Creature* creature)
{
	creature->takeDamage(wep->Attack());
}
void Player::takeDamage(int hit)
{
	hit -= getDefence();
	if (hit > actualHP)
	{
		actualHP = 0;
		std::cout << "Giniesz" << std::endl;
	}
	else if (hit > 0)
	{
		actualHP -= hit;
	}
	else if (hit <= 0)
	{
		std::cout << "Cios sparowany" << std::endl;
	}
}



Inventory Player::getInventory()
{
	return this->backpack;
}