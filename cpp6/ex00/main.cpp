#include "Conversion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: ./ex00 [number]" << std::endl;
        return (1);
    }

    try {
        Conversion conversion;
        conversion.toChar(argv[1]);
        conversion.toInt(argv[1]);
        conversion.toFloat(argv[1]);
        conversion.toDouble(argv[1]);
    }
    catch(const std::exception& e) {

        std::cerr << e.what() << std::endl;
    }
    return 0;
}


/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
 */
