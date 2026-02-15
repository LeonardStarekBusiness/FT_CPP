#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
};

Fixed::Fixed(const int raw)
{
    std::cout << "Int Parameter constructor called" << std::endl;
    value = raw<<bits;
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float Parameter constructor called" << std::endl;
    value = (int)(raw*256);
}

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

std::ostream& operator<<(std::ostream &stream, const Fixed &other)
{
    stream << other.toFloat();
    return stream;
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

float Fixed::toFloat(void) const
{
    return (value/256.0);
}

int Fixed::toInt(void) const
{
    return (value>>bits);
}