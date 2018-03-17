#include "HealthPotion.h"



HealthPotion::HealthPotion(int HP)
{
	this->HP = HP;
}


HealthPotion::~HealthPotion()
{
}
void use(Player* player)
{
	player->setHP(HealthPotion::HP);
}
