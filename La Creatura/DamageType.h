#pragma once
#include <iostream>
#include <string>

using namespace std;

enum DamageType
{
	Cut,  //causes bleeding
	Stab, //causes bleeding
	Poison, //poison damage (the monster has rabbies)
	Bludgeoning, //pshyc damage
	Burn, //straight up sets you on fire
	Drain,//Sucks you dry
	Pshyc //pshyc damage
};

inline string DamageTypeToStr(DamageType damageType)
{
	switch (damageType)
	{
	default:
		return "Default";

	case DamageType::Cut:
		return "Cut";

	case DamageType::Stab:
		return "stab";

	case DamageType::Poison:
		return "Poison";

	case DamageType::Bludgeoning:
		return "Bludgeoning";

	case DamageType::Burn:
		return "burn";

	case DamageType::Drain:
		return "drain";

	case DamageType::Pshyc:
		return "Psych";
	}
}
