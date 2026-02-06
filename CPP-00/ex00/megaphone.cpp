#include <iostream>

int main(int ac, char *av[])
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
        {
            for (int c = 0; av[i][c]; c++)
            {
                std::cout << (char)toupper(av[i][c]);
            }
        }
        std::cout << std::endl;
    }
    return (0);
}