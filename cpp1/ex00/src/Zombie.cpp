#include "../inc/Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::putname(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed\n"; 
}

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}

