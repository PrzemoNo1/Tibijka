#include "Player.h"



Player::Player()
{
}


Player::~Player()
{
}
void Player::Equip(IItem* item)
{
	switch (item->GetType())
	{
	case 1: wep = static_cast<IWeapon*>(item); break;
	case 2: hel = (Helm*)item; std::cout << "Ubieram helm"; break;
	case 3: tun = (Tunic*)item; break;
	case 4: pants = (Pants*)item; break;
	case 5: glo = (Gloves*)item; std::cout << "Ubieram buty"; break;
	case 6: boo = (Boots*)item; break;

	}
}