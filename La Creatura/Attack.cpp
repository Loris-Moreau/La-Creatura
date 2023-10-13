#include "Attack.h"

Attack::Attack(string name, Weapon weapon, int damagePoints, DamageType damageType, int attackBonus)
	:_name(name), _weapon(weapon), _damagePoints(damagePoints), _damageType(damageType), _attackBonus(attackBonus)
{

}

int Attack::GetAttackBonus() const
{
	return _attackBonus;
}