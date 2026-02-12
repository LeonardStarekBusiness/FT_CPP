#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
    for (int c = 0; c < N; c++)
    {
        horde[c].set_name(name);
    }
    return (horde);
}