#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
};

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    value = other.value;
}
Fixed &Fixed::operator=(const Fixed other)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    if (this == &other)
        return (*this);
    value = other.value;
    return (*this);
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    //nothing to do
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl;
    return (value);
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits called" << std::endl;
    value = raw;
}