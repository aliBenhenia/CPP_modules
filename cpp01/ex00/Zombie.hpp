#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie
{
    private :
        std :: string name;
    public :
        Zombie(std :: string n);
        void announce();
        ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif