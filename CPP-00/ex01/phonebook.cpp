#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	_oldest = 0;
}

PhoneBook::PhoneBook(const PhoneBook &other)
{
	for (int i = 0; i < 8; i++)
	{
		contacts[i] = other.contacts[i];
	}
	_oldest = other._oldest;
}

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 8; i++)
	{
		contacts[i] = other.contacts[i];
	}
	_oldest = other._oldest;
	return (*this);
}

PhoneBook::~PhoneBook()
{
	// nothing to do.
}

void PhoneBook::add_contact(Contact &c)
{
	contacts[_oldest] = c;
	_oldest = (_oldest + 1) % 8;
}

void PhoneBook::list_contacts(void)
{
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].isempty())
			std::cout << contacts[i].getfirstname(1) << " | " << contacts[i].getlastname(1) << " | " << contacts[i].getnickname(1) << " | " << contacts[i].getphonenumber(1) << " | " << contacts[i].getdarkestsecret(1) << std::endl;
		else
			std::cout << "[empty]" << std::endl;
	}
}
void PhoneBook::show_contact(std::string num)
{
    int i = atoi(num.c_str());
    if (i < 0 || i > 9)
    {
        std::cout << "Index out of range!" << std::endl;
        return ;
    }
    else
    {
        if (!contacts[i].isempty())
		{
            std::cout << "First Name: " << contacts[i].getfirstname(0) << std::endl;
            std::cout << "Last Name: " << contacts[i].getlastname(0) << std::endl;
            std::cout << "Nickname: " << contacts[i].getnickname(0) << std::endl;
            std::cout << "Phone Number: " << contacts[i].getphonenumber(0) << std::endl;
            std::cout << "Darkest Secret: " << contacts[i].getdarkestsecret(0) << std::endl;
        }
        else
			std::cout << "[empty]" << std::endl;
    }
}