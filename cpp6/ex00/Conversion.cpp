
#include "Conversion.hpp"
#include <cstring>
Conversion::Conversion() : number (0.0){
    std::cout << "Conversion default constructor called";
}
Conversion::~Conversion() {
    std::cout << "Conversion destructor called";
}
Conversion::Conversion(const Conversion &conversion) {
    this->number = conversion.number;
}

Conversion & Conversion::operator = (const Conversion &conversion){
    this->number = conversion.number;
    return (*this);
}

void Conversion::toChar(char *str) {

    if(strlen(str) == 1 && isdigit(str[0]) == 0)
        number = static_cast<int>(*str);
    else
        number = atof(str);

    if (number < 0 || number > 127 || std::isnan(number))
        std::cout << "char: impossible"<< std::endl;
    else if (number < 32 || number > 126)
        std::cout << "char: not displayable"<< std::endl;
    else
        std::cout << "char: \'" << static_cast<char>(number) << "\'" << std::endl;
}

void Conversion::toDouble(char *str) {
    number = atof(str);
    if (number - static_cast<int>(number) == 0)
        std::cout << "double: " << number << ".0" << std::endl;
    else
    std::cout << "double: " <<  number << std::endl;
}

void Conversion::toFloat(char *str) {
    number = atof(str);
    if (number - static_cast<int>(number) == 0)
        std::cout << "float: " << static_cast<float>(number)  << ".0" << "f" << std::endl;
    else
        std::cout << "float: "<< static_cast<float>(number) << "f" << std::endl;
}

void Conversion::toInt(char *str) {
    number = atof(str);
    if (number > std::numeric_limits<int>::max() || number < std::numeric_limits<int>::min() || std::isnan(number))
        std::cout << "integer: impossible" << std::endl;
    else
        std::cout << "integer: " << static_cast<int>(number) << std::endl;
}



