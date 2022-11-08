#include <iostream>
#include "Array.hpp"

#define MAX_VAL 4
int main(int, char**)
{
    Array<int> numbers((unsigned int)MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try{
        Array<int> n(0);
        std::cout << "array of empty size" << std::endl; //Is it possible to create an empty array and an array of a specific size?
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}
