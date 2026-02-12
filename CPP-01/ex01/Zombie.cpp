#include "Zombie.hpp"

Zombie::Zombie()
{
    _name = "Gerd";
}
Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::Zombie(const Zombie &other)
{
    _name = other._name;
}

Zombie &Zombie::operator=(const Zombie other)
{
    if (this == &other)
    {
        return (*this);
    }
    _name = other._name;
    return (*this);
}

Zombie::~Zombie()
{
    std::cout << _name << " has been destroyed." <<std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    _name = name;
}
