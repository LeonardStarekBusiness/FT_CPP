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
    friend std::ostream &operator<<(std::ostream &stream, const Fixed &other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};