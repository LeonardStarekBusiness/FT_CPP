#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie *baal = newZombie("baal");
    baal->announce();
    delete baal;
    randomChump("moloch");
}