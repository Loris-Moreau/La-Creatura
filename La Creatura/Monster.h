#pragma once
#include "Creature.h"
#include "Loot.h"

class Monster : public Creature
{
public: 
    vector<Loot> _loot;
    int _goldAmount = 0;
};

