
#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <limits>

class Conversion {
private:
    double number;
public:
    Conversion();
    ~Conversion();
    Conversion(const Conversion &);
    Conversion& operator=(const Conversion &conversion);

    void		toChar(char *str);
    void		toInt(char *str);
    void		toFloat(char *str);
    void		toDouble(char *str);

};

#endif
