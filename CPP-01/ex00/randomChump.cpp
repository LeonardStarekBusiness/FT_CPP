#include "Zombie.hpp"

void	randomChump(std::string name)
{
    Zombie individuum = Zombie(name);
    individuum.announce();
}