#include <iostream>

class Harl
{
  private:
    void (Harl::*funcs[4])(void);
    
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	void complain(std::string level);
};