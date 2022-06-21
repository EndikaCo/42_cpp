
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixedPoint;
    static const int FRACTIONAL_BITS = 8; 
public:
    Fixed();
    Fixed(const int par);
    Fixed(const float par);
    ~Fixed();
    Fixed(Fixed const &orig);

    bool operator>(Fixed const &a)const;
    bool operator<(Fixed const &a)const;
    bool operator<=(Fixed const &a)const;
    bool operator>=(Fixed const &a)const;
    bool operator==(Fixed const &a)const;
    bool operator!=(Fixed const &a)const;

    Fixed operator+(Fixed const &a)const;
    Fixed operator-(Fixed const &a)const;
    Fixed operator*(Fixed const &a)const;
    Fixed operator/(Fixed const &a)const;

    Fixed &operator=(Fixed const &a);

    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);

    int getRawBits( void ) const; 
    void setRawBits( int const raw ); 
    float toFloat( void ) const;
    int toInt( void ) const;

    static Fixed& min(Fixed &a, Fixed  &b);
    static const Fixed&  min( const Fixed  &a, const Fixed  &b);
    static Fixed& max(Fixed &a, Fixed  &b);
    static const Fixed&  max(Fixed const &a, Fixed const &b);
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixedPoint);

#endif