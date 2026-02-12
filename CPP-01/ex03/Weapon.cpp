#include "Weapon.hpp"

Weapon::Weapon()
{
    _type = "none";
}
Weapon::Weapon(std::string type)
{
    _type = type;
}
Weapon::Weapon(const Weapon &other)
{
    _type = other._type;
}
Weapon &Weapon::operator=(const Weapon other)
{
    if (this == &other)
        return (*this);
    _type = other._type;
    return (*this);
}

Weapon::~Weapon()
{
    //nothing to do.
}

const std::string Weapon::getType()
{
    return (_type);
}
void	Weapon::setType(std::string type)
{
    _type = type;
}