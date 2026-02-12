#include "HumanB.hpp"

HumanB::HumanB()
{
	_name = "Gerbert";
}
HumanB::HumanB(std::string name)
{
	_name = name;
}
HumanB::HumanB(const HumanB &other)
{
	_name = other._name;
	_weapon = other._weapon;
}
HumanB &HumanB::operator=(const HumanB other)
{
	if (this == &other)
		return (*this);
	_name = other._name;
	_weapon = other._weapon;
	return (*this);
}
HumanB::~HumanB()
{
	// nothing to do.
}

void HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}