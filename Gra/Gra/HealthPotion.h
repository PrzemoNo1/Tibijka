#pragma once
#include "IPotion.h"
#include "Player.h"
class HealthPotion : public IPotion
{
	int HP;
public:
	HealthPotion(int HP=100);
	~HealthPotion();
	void use(Player* player);
};

