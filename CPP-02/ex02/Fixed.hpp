#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int bits = 8;

public:
    Fixed();
    Fixed(const int raw);
    Fixed(const float raw);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed other);

    Fixed operator+(const Fixed &other);
    Fixed operator-(const Fixed &other);
    Fixed operator*(const Fixed &other);
    Fixed operator/(const Fixed &other);

    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    static Fixed &min(Fixed &one, Fixed &two);
    static const Fixed &min(const Fixed &one, const Fixed &two);
    static Fixed &max(Fixed &one, Fixed &two);
    static const Fixed &max(const Fixed &one, const Fixed &two);

    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

bool operator>(const Fixed &one, const Fixed &two);
bool operator<(const Fixed &one, const Fixed &two);
bool operator>=(const Fixed &one, const Fixed &two);
bool operator<=(const Fixed &one, const Fixed &two);
bool operator==(const Fixed &one, const Fixed &two);
bool operator!=(const Fixed &one, const Fixed &two);
std::ostream &operator<<(std::ostream &stream, const Fixed &other);