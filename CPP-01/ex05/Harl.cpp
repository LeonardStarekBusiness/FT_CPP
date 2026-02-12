#include "Harl.hpp"

void	Harl::debug(void)
{
    std::cout << "DEBUG: There is a Alma Mahler" << std::endl;
}
void	Harl::info(void)
{
    std::cout << "INFO: Alma Mahler is coming" << std::endl;
}
void	Harl::warning(void)
{
    std::cout << "WARNING! Alma Mahler is near you!" << std::endl;
}
void	Harl::error(void)
{
    std::cout << "ERROR! You were slain by Alma Mahler" << std::endl;
}

void Harl::complain(std::string level)
{
    funcs[0] = &Harl::debug;
    funcs[1] = &Harl::info;
    funcs[2] = &Harl::warning;
    funcs[3] = &Harl::error;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            (this->*funcs[i])();
    }
}