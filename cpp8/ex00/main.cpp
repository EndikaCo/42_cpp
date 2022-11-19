
#include "easyfind.hpp"

int main()
{
    //TEST 0
    int myints[] = { 10, 20, 30, 40 };
    std::vector<int> vector1(myints,myints+4);
    easyfind(vector1, 30);

    //TEST1
    std::vector<int> vector2;
    vector2.push_back(10);
    vector2.push_back(20);
    vector2.push_back(30);
    easyfind(vector2, 10);

    //TEST2
    easyfind(vector2, 8);

    //TEST3
    //std::vector<int> vector3 = { 1, 2, 5 }; //es c11
    //easyfind(vector3, 5);
    //return 0;
}
