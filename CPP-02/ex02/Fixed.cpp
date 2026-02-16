#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
};
Fixed::Fixed(const int raw)
{
	value = raw << bits;
}

Fixed::Fixed(const float raw)
{
	value = (int)(raw * 256);
}

Fixed::Fixed(const Fixed &other)
{
	value = other.value;
}
Fixed &Fixed::operator=(const Fixed other)
{
	if (this == &other)
		return (*this);
	value = other.value;
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &other)
{
	stream << other.toFloat();
	return (stream);
}

Fixed::~Fixed()
{
	// nothing to do
}

int Fixed::getRawBits(void) const
{
	return (value);
}
void Fixed::setRawBits(int const raw)
{
	value = raw;
}

float Fixed::toFloat(void) const
{
	return (value / 256.0);
}

int Fixed::toInt(void) const
{
	return (value >> bits);
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed result(toFloat() + other.toFloat());
	return (result);
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed result(toFloat() - other.toFloat());
	return (result);
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed result(toFloat() * other.toFloat());
	return (result);
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed result(toFloat() / other.toFloat());
	return (result);
}

Fixed &Fixed::operator++()
{
	value = value + 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	old;

	old = *this;
	value = value + 1;
	return (old);
}

Fixed &Fixed::operator--()
{
	value = value - 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	old;

	old = *this;
	value = value + 1;
	return (old);
}
bool operator>(const Fixed &one, const Fixed &two)
{
	return (one.getRawBits() > two.getRawBits());
}

bool operator<(const Fixed &one, const Fixed &two)
{
	return (one.getRawBits() < two.getRawBits());
}

bool operator>=(const Fixed &one, const Fixed &two)
{
	return (one.getRawBits() >= two.getRawBits());
}

bool operator<=(const Fixed &one, const Fixed &two)
{
	return (one.getRawBits() <= two.getRawBits());
}

bool operator==(const Fixed &one, const Fixed &two)
{
	return (one.getRawBits() == two.getRawBits());
}

bool operator!=(const Fixed &one, const Fixed &two)
{
	return (one.getRawBits() != two.getRawBits());
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
    if (one < two)
        return one;
    return two;
}
const Fixed &Fixed::min(const Fixed &one, const Fixed &two)
{
    if (one < two)
        return one;
    return two;
}
Fixed &Fixed::max(Fixed &one, Fixed &two)
{
    if (one > two)
        return one;
    return two;
}
const Fixed &Fixed::max(const Fixed &one, const Fixed &two)
{
    if (one > two)
        return one;
    return two;
}