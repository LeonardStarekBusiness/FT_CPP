#include "contact.hpp"

Contact::Contact()
{
    _firstname = "Terry";
    _lastname = "Davis";
    _nickname = "King Terry the Terrible";
    _phonenumber = "[REDACTED]";
    _darkestsecret = "[REDACTED]";
    is_empty = true;
}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname,
	std::string phonenumber, std::string darkestsecret)
{
    _firstname = firstname;
    _lastname = lastname;
    _nickname = nickname;
    _phonenumber = phonenumber;
    _darkestsecret = darkestsecret;
    is_empty = false;
}

Contact::Contact(const Contact &other)
{
    _firstname = other._firstname;
    _lastname = other._lastname;
    _nickname = other._nickname;
    _phonenumber = other._phonenumber;
    _darkestsecret = other._darkestsecret;
    is_empty = other.is_empty;
}

Contact &Contact::operator=(const Contact &other)
{
    if (this == &other)
    {
        return (*this);
    }
    _firstname = other._firstname;
    _lastname = other._lastname;
    _nickname = other._nickname;
    _phonenumber = other._phonenumber;
    _darkestsecret = other._darkestsecret;
    is_empty = other.is_empty;
    return (*this);
}

Contact::~Contact()
{
    //nothing to do. 
}

bool Contact::isempty()
{
    return (is_empty);
}

std::string Contact::getfirstname(bool amended)
{
    if (!amended)
        return (_firstname);
    std::string rstr = _firstname.substr(0, 10);
    rstr.resize(10, ' ');
    if (_firstname.length() > 10)
        rstr[9] = '.';
    return rstr;
}

std::string Contact::getlastname(bool amended)
{
    if (!amended)
        return (_lastname);
    std::string rstr = _lastname.substr(0, 10);
    rstr.resize(10, ' ');
    if (_lastname.length() > 10)
        rstr[9] = '.';
    return rstr;
}
std::string Contact::getnickname(bool amended)
{
    if (!amended)
        return (_nickname);
    std::string rstr = _nickname.substr(0, 10);
    rstr.resize(10, ' ');
    if (_nickname.length() > 10)
        rstr[9] = '.';
    return rstr;
}
std::string Contact::getphonenumber(bool amended)
{
    if (!amended)
        return (_phonenumber);
    std::string rstr = _phonenumber.substr(0, 10);
    rstr.resize(10, ' ');
    if (_phonenumber.length() > 10)
        rstr[9] = '.';
    return rstr;
}
std::string Contact::getdarkestsecret(bool amended)
{
    if (!amended)
        return (_darkestsecret);
    std::string rstr = _darkestsecret.substr(0, 10);
    rstr.resize(10, ' ');
    if (_darkestsecret.length() > 10)
        rstr[9] = '.';
    return rstr;
}