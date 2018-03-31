#pragma once
#include "Creature.h"
class Fight
{
	Creature* first;
	Creature* second;

public:
	Fight(Creature*, Creature*);
	~Fight();
	void battle();
};

