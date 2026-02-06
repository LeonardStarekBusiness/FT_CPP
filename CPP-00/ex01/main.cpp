#include "phonebook.hpp"

int main(void)
{
    std::string command;
    PhoneBook pb;
    while (command != "EXIT")
    {
        std::cin >> command;
        if (command == "ADD")
        {
            std::string firstname, lastname, nickname, phonenumber, darkestsecret;
            std::cout << "First Name: "; std::cin >> firstname;
            std::cout << "Last Name: "; std::cin >> lastname;
            std::cout << "Nickname: "; std::cin >> nickname;
            std::cout << "Telephone Number: "; std::cin >> phonenumber;
            std::cout << "Darkest Secret: "; std::cin >> darkestsecret;
            Contact c(firstname, lastname, nickname, phonenumber, darkestsecret);
            pb.add_contact(c);
        }
        if (command == "SEARCH")
        {
            pb.list_contacts();
            std::string index;
            std::cout << "Index of Contact: "; std::cin >> index;
            pb.show_contact(index);
        }
    }
    return (0);
}