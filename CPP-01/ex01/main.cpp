#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
    int amount = 5;
	Zombie *horde = zombieHorde(amount, "Herbert");
    for (int c = 0; c < amount; c++)
    {
        horde[c].announce();
    }
    delete[] horde;
}