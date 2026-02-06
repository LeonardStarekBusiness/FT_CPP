#include "contact.hpp"
#include <iostream>

class PhoneBook
{
  public:
	PhoneBook();
	PhoneBook(const PhoneBook &other);
	PhoneBook &operator=(const PhoneBook &other);
	~PhoneBook();

    void add_contact(Contact &c);
    void list_contacts(void);
    void show_contact(std::string num);

  private:
	Contact contacts[8];
    int _oldest;
};