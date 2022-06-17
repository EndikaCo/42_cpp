#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include<iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();   // Declare constructor
        ~Zombie();  // Declare Destructor
        
        void putname(std::string name);
        void announce(void);
};

void randomChump( std::string name );//función que cree un Zombie, y lo haga anunciarse a sí mismo.
Zombie* newZombie( std::string name );//función que cree un Zombie, lo nombre, y lo devuelva

#endif