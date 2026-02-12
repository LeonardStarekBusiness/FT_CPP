#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *individuum = new Zombie(name);
	return (individuum);
}