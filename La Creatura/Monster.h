#pragma once
#include "Creature.h"
#include "Loot.h"

class Monster : public Creature
{
private: 
    vector<Loot> _loot;
    int _goldAmount = 0;
};
