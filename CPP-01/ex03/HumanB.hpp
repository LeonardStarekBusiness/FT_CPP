#include "Weapon.hpp"
#include <iostream>

class HumanB
{
  private:
	std::string _name;
	Weapon *_weapon;

  public:
	HumanB();
	HumanB(std::string name);
	HumanB(const HumanB &other);
	HumanB &operator=(const HumanB other);
	~HumanB();

	void attack();
	void setWeapon(Weapon &weapon);
};