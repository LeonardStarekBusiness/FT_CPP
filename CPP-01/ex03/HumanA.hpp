#include "Weapon.hpp"
#include <iostream>

class HumanA
{
  private:
	std::string _name;
	Weapon &_weapon;
    Weapon _defaultWeapon;

  public:
	HumanA();
	HumanA(std::string name, Weapon &weapon);
	HumanA(const HumanA &other);
	HumanA &operator=(const HumanA other);
	~HumanA();

	void attack();
};