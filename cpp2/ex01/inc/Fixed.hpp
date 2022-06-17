
#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int fixedPoint;
    static const int FRACTIONAL_BITS = 8; 
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &orig);
    Fixed &operator=(Fixed const &a);
    int getRawBits( void ) const; 
    void setRawBits( int const raw ); 
};

#endif