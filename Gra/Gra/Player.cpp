#include "Player.h"



Player::Player()
{
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
int Player::getDefence()
{
	return (*hel).GetDefence() + (*tun).GetDefence() + (*pants).GetDefence() + (*glo).GetDefence() + (*boo).GetDefence();
}
Inventory Player::getInventory()
{
	return this->backpack;
}