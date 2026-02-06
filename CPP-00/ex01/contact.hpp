#include <iostream>
#include <cstring>

class Contact
{
  private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;
	bool is_empty;

  public:
	Contact();
	Contact(std::string firstname, std::string lastname, std::string nickname,
		std::string phonenumber, std::string darkestsecret);
	Contact(const Contact &other);
	Contact &operator=(const Contact &other);
	~Contact();

	bool isempty();
	std::string getfirstname(bool amended);
	std::string getlastname(bool amended);
	std::string getnickname(bool amended);
	std::string getphonenumber(bool amended);
	std::string getdarkestsecret(bool amended);
};