#include "../inc/Zombie.hpp"

//default constructor
Zombie::Zombie()
{
}

void Zombie::putname(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout <<"Destroyed\n"; 
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ...\n";
}

