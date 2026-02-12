#include "HumanA.hpp"

HumanA::HumanA()
: _weapon(_defaultWeapon)
{
	_name = "Gerbert";
}
HumanA::HumanA(std::string name, Weapon &weapon)
: _weapon(weapon)
{
	_name = name;
}
HumanA::HumanA(const HumanA &other)
: _weapon(other._weapon)
{
	_name = other._name;
}
HumanA &HumanA::operator=(const HumanA other)
{
	if (this == &other)
		return (*this);
	_name = other._name;
	_weapon = other._weapon;
	return (*this);
}
HumanA::~HumanA()
{
	// nothing to do.
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}