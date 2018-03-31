#include "HealthPotion.h"



HealthPotion::HealthPotion(int HP)
{
	this->HP = HP;
}


HealthPotion::~HealthPotion()
{
}
void HealthPotion::use(Player* player)
{
	player->setHP(HP);
}
