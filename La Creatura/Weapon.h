#pragma once
#include <iostream>
#include <string>

enum Weapon
{
	Sword,
	Dagger,
	Bow,
	Staff,
	Gun,
	Teeth
};

inline string WeaponToStr(Weapon weapon)
{
	switch (weapon)
	{
	default:
		return "Default";

	case Weapon::Sword:
		return "Sword";

	case Weapon::Dagger:
		return "Dagger";

	case Weapon::Bow:
		return "Bow";

	case Weapon::Staff:
		return "Staff";

	case Weapon::Gun:
		return "Gun";

	case Weapon::Teeth:
		return "Teeth";
	}
}