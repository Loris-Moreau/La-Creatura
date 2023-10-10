#pragma once
#include <iostream>
#include <string>

using namespace std;
enum Loot
{
	JungleJuice,
	ForbidenFood,
	Jimmy,
	Heart
};

inline string LootToStr(Loot loot)
{
	switch (loot)
	{
	default:
		return "Default";

	case Loot::JungleJuice:
		return "Jungle Juice";

	case Loot::ForbidenFood:
		return "Forbiden Food";

	case Loot::Jimmy:
		return "Jimmy";

	case Loot::Heart:
		return "Monster Heart";
	}
}