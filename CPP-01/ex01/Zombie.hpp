#include <iostream>

class Zombie
{
  private:
	std::string _name;

  public:
	Zombie();
	Zombie(std::string name);
	Zombie(const Zombie &other);
	Zombie &operator=(const Zombie other);
	~Zombie();

	void announce(void);
	void set_name(std::string name);
};