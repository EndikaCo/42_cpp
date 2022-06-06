#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include<iostream>

class Zombie
{
private:
    std::string name;
    
public:
    Zombie(); // Declare constructor
    ~Zombie();          // Declare Destructor
    Zombie* newZombie( std::string name );//función que cree un Zombie, lo nombre, y lo devuelva
    void randomChump( std::string name );//función que cree un Zombie, y lo haga anunciarse a sí mismo.
    void announce(void);
};



#endif